/**  
* @file main.c  
* @brief enigmas 
* @author  Wala Alimi &  Aziz Cherif 
* @version 1.2
* @date juin 01, 2020  
*  
* Testing program for enigmas
* 
*/




#include<SDL/SDL.h>
#include<SDL/SDL_ttf.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"quiz.h"
#include"quiz.c"



int main() {
	
//	Question a;
//	strcpy(a.question,"hello");


	int running = 1;

	int currentChoice = 0;
	srand(time(NULL));
	int qid = (int)(random()%3);
	int choices[3] = {0,1,2};
	for(int i = 0; i<10; i++){
		int t = random()%3;
		int t2 = random()%3;
		int t3 = choices[t];
		choices[t] = choices[t2];
		choices[t2] = t3;
	}

	printf("%d %d %d\n",choices[0],choices[1],choices[2]);
	
	Quiz q;
	QUIZ_Init(&q,"./questions.txt");

	SDL_Surface *screen , *msg, *arrow;
	TTF_Font *font = NULL;

	SDL_Init(SDL_INIT_EVERYTHING);
	TTF_Init();
	
	screen = SDL_SetVideoMode(1200,600,32,SDL_HWSURFACE);

	SDL_Event event;

	font = TTF_OpenFont("Hitman.ttf", 24);

	SDL_Color color = {0,0,255}; //

	SDL_Rect rect;
	SDL_Rect choice;

	choice.x = 75;
	choice.y = 50;

	arrow = SDL_CreateRGBSurface(0,16,16,32,0,0,0,0);
	SDL_FillRect(arrow,NULL,SDL_MapRGB(arrow->format,255,255,255));

	SDL_EnableKeyRepeat(0,0);
	
	while(running) {
		while(SDL_PollEvent(&event)){
			if(event.type == SDL_QUIT){
					running = 0;
			}
			if(event.type == SDL_KEYDOWN){
				if(event.key.keysym.sym == SDLK_ESCAPE){
					running = 0;
				}
				if(event.key.keysym.sym == SDLK_DOWN){
					if(currentChoice != 2)
						currentChoice++;
					else 
						currentChoice = 0;	
				}
				if(event.key.keysym.sym == SDLK_UP){
					if(currentChoice != 0)
						currentChoice--;
					else 
						currentChoice = 2;	
				}
				if(event.key.keysym.sym == SDLK_RETURN){
					if(choices[currentChoice] == 0){
						running = 0;
						SDL_Rect t;
						t.x = 300;
						t.y = 400;
						msg = TTF_RenderText_Solid(font, "Correct Answer" , color);
						SDL_BlitSurface(msg,NULL,screen,&t);
						SDL_Flip(screen);
						SDL_Delay(1000);
					}
					else {
						running = 0;
						SDL_Rect t;
						t.x = 300;
						t.y = 400;
						msg = TTF_RenderText_Solid(font, "Incorrect Answer" , color);
						SDL_BlitSurface(msg,NULL,screen,&t);
						SDL_Flip(screen);
						SDL_Delay(1000);
					}
				}
			}
		}

	SDL_FillRect(screen,&screen->clip_rect,0x000000);
	//afficher question		
	rect.x = 100;
	rect.y = 0;

	msg = TTF_RenderText_Solid(font, q.questions[qid].question , color);
	SDL_BlitSurface(msg,NULL,screen,&rect);

	// 1,2,0 4.2.3

	//affichage choix 1
	
	rect.y = 50+50*0;
	msg = TTF_RenderText_Solid(font, getQuestion(&q.questions[qid],choices[0]) , color);
	SDL_BlitSurface(msg,NULL,screen,&rect);
	

        //affichage choix 2
	rect.y = 50+50*1;
	msg = TTF_RenderText_Solid(font, getQuestion(&q.questions[qid],choices[1]) , color);
	SDL_BlitSurface(msg,NULL,screen,&rect);


        //affichage choix 3
	rect.y = 50+50*2;
	msg = TTF_RenderText_Solid(font, getQuestion(&q.questions[qid],choices[2]), color);
	SDL_BlitSurface(msg,NULL,screen,&rect);
	

        choice.y =50+currentChoice*50; 
	SDL_BlitSurface(arrow,NULL,screen,&choice);


	SDL_Flip(screen);
		SDL_Delay(16);
	}


	SDL_FreeSurface(screen);
	SDL_FreeSurface(msg);
	TTF_CloseFont(font);
	TTF_Quit();
	SDL_Quit();

}
