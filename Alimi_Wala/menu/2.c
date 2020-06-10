#include "SDL/SDL.h"
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>

#include <SDL/SDL_ttf.h> 
void pause();
 
int main(int argc, char *argv[])
{
 SDL_Surface *ecran = NULL, *imageDeFond = NULL, *play = NULL ,*settings= NULL , *about=NULL,*quit=NULL,*image5=NULL,*image6=NULL,*image7=NULL, *play1=NULL, *about1=NULL, *settings1=NULL, *quit1=NULL,*image8=NULL, *image10 = NULL ,*volumem1 = NULL , *volumep=NULL,*volumep1=NULL,*mute=NULL,*mute1=NULL,*fullscreen=NULL,*volumem = NULL ,*fullscreen1 = NULL , *back1=NULL,*back=NULL;
   

 SDL_Rect positionFond ,positionplay,positionsettings ,positionquit
 ,positionabout,positionclic,positionimage5,positionimage6,positionimage7,
positionimage8,positionimage9,positionplay1,positionsettings1
 ,positionquit1 ,positionabout1,positionvolumep1,positionvolumep, positionvolumem1,positionvolumem,positionmute1,positionmute, positionfullscreen,positionfullscreen1,positionback1,positionback;
 



 putenv("SDL_VIDEO_CENTERED=1");//centrer l ecran
	

    positionFond.x = 0;
    positionFond.y = 0;
    positionsettings.x = 272;
    positionsettings.y = 158;
    positionabout.x = 272;
    positionabout.y = 248;
    positionplay.x = 272;
    positionplay.y = 69;
    positionquit.x = 272;
    positionquit.y = 326;
    positionimage5.x = 0;
    positionimage5.y = 0;
    positionimage6.x = 0;
    positionimage6.y = 0;
    positionimage7.x = 0;
    positionimage7.y = 0;
    positionsettings1.x = 272;
    positionsettings1.y = 158;
    positionabout1.x = 272;
    positionabout1.y = 248;
    positionplay1.x = 272;
    positionplay1.y = 69;
    positionquit1.x = 272;
    positionquit1.y = 326;
    positionimage8.x = 0;
    positionimage8.y = 0;
    positionmute1.x = 290;
    positionmute1.y = 200;
    positionmute.x = 290;
    positionmute.y = 132;
    positionfullscreen1.x = 290;
    positionfullscreen1.y = 273;
    positionfullscreen.x = 290;
    positionfullscreen.y = 120;
    positionback1.x = 290;
    positionback1.y = 350;
    positionback.x = 290;
    positionback.y = 200;
    positionvolumem1.x = 290;
    positionvolumem1.y = 125;
    positionvolumep1.x = 290;
    positionvolumep1.y = 50;
    positionvolumep.x = 290;
    positionvolumep.y = 50;
    positionvolumem.x = 290;
    positionvolumem.y = 50;




      
     
    if (Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
     {
        printf("%s",Mix_GetError());
     }      


     Mix_Music *son;
     son = Mix_LoadMUS("son.mp3");


     Mix_Music *music;
     music = Mix_LoadMUS("soncontinu.mp3");
     Mix_PlayMusic(music,-1);
 	
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();		
			
 

    ecran = SDL_SetVideoMode(790,441, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
    
 







imageDeFond = IMG_Load("menu.png");
 SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
 


   //creer une police
TTF_Font *fontTest=NULL;
fontTest=TTF_OpenFont("Hitman.ttf",15);
SDL_Color fontColor={255,255,255};
//creer zone de texte

SDL_Surface *texte1;
texte1=TTF_RenderText_Blended(fontTest,"An amazing adventure awaits you.. ",fontColor);
SDL_Rect texte1Position;
texte1Position.x=240;
texte1Position.y=420;
SDL_BlitSurface(texte1,NULL,imageDeFond,&texte1Position);
SDL_Flip(ecran);   











play = IMG_Load("play.png");
    SDL_BlitSurface(play, NULL, ecran, &positionplay);
 

 settings = IMG_Load("setting.png");

    SDL_BlitSurface(settings, NULL, ecran, &positionsettings);

about = IMG_Load("about.png");

    SDL_BlitSurface(about, NULL, ecran, &positionabout);

quit = IMG_Load("quit.png");
     
    SDL_BlitSurface(quit,&positionFond,ecran,&positionquit);

play1 = IMG_Load("play1.png");
     
    SDL_BlitSurface(play1,&positionFond,ecran,&positionplay1);

settings1 = IMG_Load("settings1.png");
     
    SDL_BlitSurface(settings1,&positionFond,ecran,&positionsettings1);

about1 = IMG_Load("about1.png");
     
    SDL_BlitSurface(about1,&positionFond,ecran,&positionabout1);

quit1 = IMG_Load("quit1.png");
    SDL_BlitSurface(quit1,&positionFond,ecran,&positionquit1);


SDL_Flip(ecran);
image6 = IMG_Load("image6.png");

image5 = IMG_Load("image5.png");

image7 = IMG_Load("image7.png");



volumem1=IMG_Load("volumem1.png");

volumep1=IMG_Load("volumep1.png");


fullscreen1=IMG_Load("fullscreen1.png");



mute1=IMG_Load("mute1.png");



back1=IMG_Load("back1.png");


		
   int done = 1,i=50;
   int k,etat=0,s=1,v=60;
   while(done)
    {	
   SDL_Event event;

	if(etat==0){
	SDL_BlitSurface(imageDeFond,&positionFond,ecran,NULL);
		 if(k==1)
		{
			SDL_BlitSurface(play1,&positionFond,ecran,&positionplay1);
				SDL_BlitSurface(settings,&positionFond,ecran,&positionsettings);
				SDL_BlitSurface(about,&positionFond,ecran,&positionabout);
				SDL_BlitSurface(quit,&positionFond,ecran,&positionquit);
			
				
     				
      
			
		}
		else if (k==2)
		{
			SDL_BlitSurface(play,&positionFond,ecran,&positionplay);
				SDL_BlitSurface(settings1,&positionFond,ecran,&positionsettings1);
				 SDL_BlitSurface(about,&positionFond,ecran,&positionabout);
				 SDL_BlitSurface(quit,&positionFond,ecran,&positionquit);
			
		}
		else if (k==3)
		{
			SDL_BlitSurface(play,&positionFond,ecran,&positionplay);
				SDL_BlitSurface(settings,&positionFond,ecran,&positionsettings);
				 SDL_BlitSurface(about1,&positionFond,ecran,&positionabout1);
				 SDL_BlitSurface(quit,&positionFond,ecran,&positionquit);
 			
		}
		else if (k==4)
		{
			SDL_BlitSurface(play,&positionFond,ecran,&positionplay);
				SDL_BlitSurface(settings,&positionFond,ecran,&positionsettings);
				 SDL_BlitSurface(about,&positionFond,ecran,&positionabout);
				 SDL_BlitSurface(quit1,&positionFond,ecran,&positionquit1);
			
		}	
	
    while(SDL_PollEvent(&event))
	{
    
	switch(event.type)
        {
           case SDL_QUIT:
           done = 0;
		
           break;
           case SDL_KEYDOWN:
	{
            
		
               if(event.key.keysym.sym == SDLK_ESCAPE)
		{
               		done = 0;
			
		}
 		else if (event.key.keysym.sym == SDLK_UP)
		{
			if (k==1)
			{
				k=4;
			}
			else
			{
				k--;
			}
		}
               
 		else if (event.key.keysym.sym == SDLK_DOWN)
		{
			
         		if (k==4)
			{
				k=1;
			}
			else
			{
				k++;
			}
		}
		else if ((event.key.keysym.sym == SDLK_SPACE)||(event.key.keysym.sym == SDLK_RETURN))
		{
			if (k==1)
			{	SDL_BlitSurface(image6,&positionFond,ecran,&positionimage6);
			SDL_Flip(ecran);
			
			SDL_Delay(5000);
			}
			else if (k==2)
			{ 
			etat=1;
			}
			else if (k==3)
			{ 	SDL_BlitSurface(image7,&positionFond,ecran,&positionimage7);



			SDL_Flip(ecran);
			Mix_PlayMusic(son,0);
			SDL_Delay(5000);
			}
			else if (k==4)
			{ 
			done=0;
			
			}
			
			
		}
               break;
	}	

		case SDL_MOUSEBUTTONDOWN:
		{
		if (event.button.button ==SDL_BUTTON_LEFT)
		{
			positionclic.x=event.button.x;
			positionclic.y =event.button.y;
			if (event.button.x>272 && event.button.x<512 && event.button.y>69 && event.button.y<120)
			{
			image6 = IMG_Load("image6.png");
				SDL_BlitSurface(image6,&positionFond,ecran,&positionimage6);
			SDL_Flip(ecran);
     			
			SDL_Delay(5000);
			}

			else if (event.button.x>272 && event.button.x<512 && event.button.y>158 && event.button.y<208)//option
			{
			etat=1;

			}
			else if (event.button.x>272 && event.button.x<512 && event.button.y>248 && event.button.y<298)//about
			{
			 image7 = IMG_Load("image7.png");
				SDL_BlitSurface(image7,&positionFond,ecran,&positionimage7);
			SDL_Flip(ecran);
     			Mix_PlayMusic(son,0);
			SDL_Delay(5000);
			}
			else if (event.button.x>272 && event.button.x<512 && event.button.y>326 && event.button.y<372)//exit
			{
			 done=0;
     			Mix_PlayMusic(son,0);
			}


	}//if

	}//case
		case SDL_MOUSEMOTION:
		{
	        	positionclic.x=event.motion.x;
			positionclic.y =event.motion.y;
			if (event.motion.x>272 && event.motion.x<512 && event.motion.y>69 && event.motion.y<120)//continuer
			{SDL_BlitSurface(play1,&positionFond,ecran,&positionplay1);
			
			k=1;}

			else if (event.motion.x>272 && event.motion.x<512 && event.motion.y>158 && event.motion.y<208)//option
			{SDL_BlitSurface(settings1,&positionFond,ecran,&positionsettings1);
			
			k=2;
			

			}
			else if (event.motion.x>272 && event.motion.x<512 && event.motion.y>248 && event.motion.y<298)//credit
			{SDL_BlitSurface(about1,&positionFond,ecran,&positionabout1);
			 k=3;
			}
			else if (event.motion.x>272 && event.motion.x<512 && event.motion.y>326 && event.motion.y<376)//exit
			{ 
SDL_BlitSurface(quit1,&positionFond,ecran,&positionquit1);
			 k=4;
			}

	
	
       	}//case

             
        }//switch


}
}
 		else if(etat==1)
	      	{
		SDL_BlitSurface(image6,&positionFond,ecran,&positionimage6);
		if(s==1)
		 {
SDL_BlitSurface(volumep1,&positionFond,ecran,&positionvolumep1);
				SDL_BlitSurface(volumem,&positionFond,ecran,&positionvolumem);
				SDL_BlitSurface(mute,&positionFond,ecran,&positionmute);
				SDL_BlitSurface(fullscreen,&positionFond,ecran,&positionfullscreen);
				SDL_BlitSurface(back,&positionFond,ecran,&positionback);
				

		 }
		else if(s==2)
		 {
SDL_BlitSurface(volumep,&positionFond,ecran,&positionvolumep);
				SDL_BlitSurface(volumem1,&positionFond,ecran,&positionvolumem1);
				SDL_BlitSurface(mute,&positionFond,ecran,&positionmute);
				SDL_BlitSurface(fullscreen,&positionFond,ecran,&positionfullscreen);
				SDL_BlitSurface(back,&positionFond,ecran,&positionback);
					
				
		 }
		else if(s==3)
		 {
			SDL_BlitSurface(volumep,&positionFond,ecran,&positionvolumep);
				SDL_BlitSurface(volumem,&positionFond,ecran,&positionvolumem);
				SDL_BlitSurface(mute1,&positionFond,ecran,&positionmute1);
				SDL_BlitSurface(fullscreen,&positionFond,ecran,&positionfullscreen);
				SDL_BlitSurface(back,&positionFond,ecran,&positionback);
					
				
		 }
		else if(s==4)
		 {
			SDL_BlitSurface(volumep,&positionFond,ecran,&positionvolumep);
				SDL_BlitSurface(volumem,&positionFond,ecran,&positionvolumem);
				SDL_BlitSurface(mute,&positionFond,ecran,&positionmute);
				SDL_BlitSurface(fullscreen1,&positionFond,ecran,&positionfullscreen1);
				SDL_BlitSurface(back,&positionFond,ecran,&positionback);
				
		 }
		else if(s==5)
		 {
			SDL_BlitSurface(volumep,&positionFond,ecran,&positionvolumep);
				SDL_BlitSurface(volumem,&positionFond,ecran,&positionvolumem);
				SDL_BlitSurface(mute,&positionFond,ecran,&positionmute);
				SDL_BlitSurface(fullscreen,&positionFond,ecran,&positionfullscreen);
				SDL_BlitSurface(back1,&positionFond,ecran,&positionback1);		
				
		 }
		

	while(SDL_PollEvent(&event))
    	{
	switch(event.type)
        {
           case SDL_QUIT:
           done = 0;
		
           break;
           case SDL_KEYDOWN:
	{
            
		
               if(event.key.keysym.sym == SDLK_ESCAPE)
		{
               		//done = 0;
			ecran = SDL_SetVideoMode(800,600, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
		}
 		else if (event.key.keysym.sym == SDLK_UP)
		{
			if (s==1)
			{
				s=5;
			}
			else
			{
				s--;
			}
		}
               
 		else if (event.key.keysym.sym == SDLK_DOWN)
		{
			
         		if (s==5)
			{
				s=1;
			}
			else
			{
				s++;
			}
		}
		else if ((event.key.keysym.sym == SDLK_SPACE)||(event.key.keysym.sym == SDLK_RETURN))
		{
			if (s==1)
			{ 
			v+=40;
			Mix_VolumeMusic(v);
			}
			else if (s==2)
			{ 
			v-=40;
			Mix_VolumeMusic(v);
			}
			else if (s==3)
			{ v=0;
			Mix_VolumeMusic(v);

			
			}
			else if (s==4)
                        {ecran = SDL_SetVideoMode(790,441, 32, SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_FULLSCREEN); 
                        }   
                        else if(s==5)
                        { etat=0;
			}}}
		
               
	
	
	case SDL_MOUSEBUTTONDOWN:
		{
		if (event.button.button ==SDL_BUTTON_LEFT)
		{
			positionclic.x=event.button.x;
			positionclic.y =event.button.y;
			if (event.button.x>290 && event.button.x<530 && event.button.y> 50 && event.button.y<103)//yzid el volu
			{
			v+=40;
			Mix_VolumeMusic(v);
			}

			else if (event.button.x>290 && event.button.x<530 && event.button.y>125 && event.button.y<178)//yon90S
			{
			v-=40;
			Mix_VolumeMusic(v);

			}
			else if (event.button.x>290 && event.button.x<530 && event.button.y>200 && event.button.y<253)//NO SOUND 
			{
			 v=0;
			Mix_VolumeMusic(v);
			}
			else if (event.button.x>290 && event.button.x<530 && event.button.y>275 && event.button.y<328)//fullscreen
			{
			 ecran = SDL_SetVideoMode(790,441, 32, SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_FULLSCREEN);
etat=0;
			}
			else if (event.button.x>290 && event.button.x<530 && event.button.y>350 && event.button.y<403)//full screen
			{
			 etat=0;
			}
			


	}//if

	}//case
		case SDL_MOUSEMOTION:
		{
	        	positionclic.x=event.motion.x;
			positionclic.y =event.motion.y;
			if (event.motion.x>290 && event.motion.x<530 && event.motion.y>50 && event.motion.y<103)
			{
			s=1;
			}

			else if (event.motion.x>290&& event.motion.x<530&& event.motion.y>125 && event.motion.y<178)
			{
			s=2;
			}
			else if (event.motion.x>290&& event.motion.x<530 && event.motion.y>200 && event.motion.y<253)
			{
			s=3;
			}
			else if (event.motion.x>290 && event.motion.x<530 && event.motion.y>275 && event.motion.y<328)
			{
			s=4;
			}
			else if (event.motion.x>290 && event.motion.x<530 && event.motion.y>350 && event.motion.y<403)
			{
			s=5;
			}
			
	
	
       	}//case

             
        }//switch
			
	}//while	


	     
		}
SDL_Flip(ecran);
}//while
Mix_PlayMusic(music,-1);
     

     





    
   // pause();

    SDL_FreeSurface(imageDeFond);
    SDL_FreeSurface(play);
    SDL_FreeSurface(quit);
    SDL_FreeSurface(about);
    SDL_FreeSurface(settings);
    SDL_FreeSurface(image5);
    SDL_FreeSurface(image6);
    SDL_FreeSurface(image7);
    SDL_FreeSurface(play1);
    SDL_FreeSurface(settings1);
    SDL_FreeSurface(quit1);
    SDL_FreeSurface(about1);
SDL_FreeSurface(volumem1);
    SDL_FreeSurface(volumep1);
    SDL_FreeSurface(quit1);
    SDL_FreeSurface(fullscreen1);
    SDL_FreeSurface(back1);
SDL_FreeSurface(texte1);
  
    SDL_FreeSurface(image8);
     TTF_CloseFont(fontTest);
     TTF_Quit();
    SDL_Quit();
 
    return EXIT_SUCCESS;
}
 
void pause()
{
    int continuer = 1;
    SDL_Event event;
 
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}
