#include "SDL/SDL.h"
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>


void pause();
 
int main(int argc, char *argv[])
{
 SDL_Surface *ecran = NULL, *bgs = NULL, *oui=NULL,*non=NULL,*question=NULL, *oui1=NULL,  *non1=NULL;
SDL_Rect positionbgs ,positionnon ,positionclic,
positionoui ,positionnon1 ,positionoui1,positionquestion;
//FILE* f=NULL;
putenv("SDL_VIDEO_CENTERED=1");//centrer l ecran
    positionbgs.x = 200;
    positionbgs.y = 155;
    positionoui.x = 272;
    positionoui.y = 268;
    positionnon.x = 272;
    positionnon.y = 332;
    positionoui1.x = 272;
    positionoui1.y = 268;
    positionnon1.x = 272;
    positionnon1.y = 332;
    positionquestion.x = 210;
    positionquestion.y = 170;
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

 ecran = SDL_SetVideoMode(700,441, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
    
bgs=IMG_Load("bg1.png");
      //SDL_BlitSurface(bgs,NULL , ecran, &positionbgs);
SDL_Flip(ecran);
oui = IMG_Load("yes.jpg");

non = IMG_Load("no.jpg");
 
oui1 = IMG_Load("yes+.jpg");
 
non1 = IMG_Load("no+.jpg");

   int done = 1;
   int k=1,etat=1;
   while(done)
    {	
   SDL_Event event;
    
     while(SDL_PollEvent(&event))
	{
    
	if (etat==1)
      {switch(event.type)
        {
           case SDL_QUIT:
           done= 0;
		
           break;
           case SDL_KEYDOWN:
	{
             if (event.key.keysym.sym == SDLK_ESCAPE)
                 etat=0;


         break;
         }//case sdl
     }//switch


   } //etat==1
} //while

	if(etat==0){
	SDL_BlitSurface(bgs, NULL, ecran, &positionbgs);
       
	     if (k==1)
		{
			
				 SDL_BlitSurface(oui1,NULL,ecran,&positionoui1);
				 SDL_BlitSurface(non,NULL,ecran,&positionnon);
 			
		}
		else if (k==2)
		{
			
				 SDL_BlitSurface(oui,NULL,ecran,&positionoui);
				 SDL_BlitSurface(non1,NULL,ecran,&positionnon1);
			
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
           
 		 if (event.key.keysym.sym == SDLK_UP)
		{
			if (k==1)
			{
				k=2;
			}
			else
			{
				k--;
			}
		}
               
 		else if (event.key.keysym.sym == SDLK_DOWN)
		{
			
         		if (k==2)
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
                            //click characters
                            if (k==1)
                            {
                              
                             done=0;                   
                            }
                            else if (k==2)//howtoplay
                            {
     
                            done=0;
                            }
                           
                        }//tsakr if to9rs 3l boutton
                
		
               break;
	}
             case SDL_MOUSEMOTION:
		
		{
	        	positionclic.x=event.motion.x;
			positionclic.y =event.motion.y;
			
		if (event.motion.x>272 && event.motion.x<363 && event.motion.y>268 && event.motion.y<322)//oui
			{
			 k=1;
			}
			else if (event.motion.x>272 && event.motion.x<363 && event.motion.y>332 && event.motion.y<386)//non
			{ 
                        
			 k=2;
			}
                   break;
      	       }//case
               case SDL_MOUSEBUTTONDOWN:
                    {
                        if (event.button.button ==SDL_BUTTON_LEFT)
                        {
                            positionclic.x=event.button.x;
                            positionclic.y =event.button.y;
                            if (event.button.x>272 && event.button.x<363 && event.button.y>268 && event.button.y<322)//YES
                            {   
                                FILE* f=NULL;
                                f=fopen("save.txt","w");
                                fprintf(f,"%d %d %d %d %d %d  \n",positionbgs.x,positionbgs.y,positionoui.x,positionoui.y,positionnon.x,positionnon.y);
                                fclose(f);
                                done=0;  
                            /** 
				   *  @elseif if "yes" is clicked
				   *    Open file in write mode.
				   *    write the current game state.
				   *	close the file.
				   *	close game 
				   *  @endif
				 */
                            }

                            else if (event.button.x>272 && event.button.x<363 && event.button.y>332 && event.button.y<386)//NO
                            {
                                done=0;
   
                               /** 
				   *  @elseif if "NO" is clicked
				   *	close game 
				   *  @endif
				 */
                            }
              
                            
                        }//if

                    }//case
    
        }//switch


}//while
}//etat



	     
		
SDL_Flip(ecran);
} //while
/*SDL_Flip(ecran);
}//while*/

Mix_PlayMusic(music,-1);


 
   // pause();

    SDL_FreeSurface(bgs);
    
    SDL_FreeSurface(oui);
    
    SDL_FreeSurface(non);
    SDL_FreeSurface(oui1);

    SDL_FreeSurface(non1);
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
