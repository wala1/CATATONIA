
/**
*  @file vie.c 
*/

#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "vie.h"

/**
* @brief To detect the collision between two objects.
* @param objt1 and objt2
* @param 
* @return x (if x=1 there is collision ) 
*/


int collisionbb( SDL_Rect objt1 , SDL_Rect objt2)
{
 int x ; 
if (( (objt1.y+objt1.h>=objt2.y)&&(objt1.y<=objt2.y+objt2.h)&&(objt1.x+objt1.w>=objt2.x)&&(objt1.x<=objt2.x+objt2.w) ))
{
	x=1 ; 
}

else x=0 ; 
return x ;
}
/**
* @brief To initialize the "vie" vie  .
* @param vie 
* @param 
* @return Nothing
*/
void initialiservie(vie *vie)
{

vie->position.x = 0 ;
vie->position.y = 0 ;

vie->fond1 = IMG_Load("3.png");
vie->fond2 = IMG_Load("2.png");
vie->fond3 = IMG_Load("1.png");
vie->fond4 = IMG_Load("l1.png");



}
/**
* @brief To show the "vie" on screen .
* @param scren the screen
* @param vie
* @return Nothing
*/
void affichervie(vie *vie,SDL_Rect *objt1 , SDL_Rect objt2,SDL_Surface *ecran , int *i )
{
 int k=collisionbb( (*objt1) , objt2 );

if(k==1)
{
(*objt1).x=0;
(*i)++;
}

if((*i)==0)
{

SDL_BlitSurface(vie->fond1,NULL, ecran,&vie->position);
SDL_Flip(ecran);
}

else if((*i)==1)
{

SDL_BlitSurface(vie->fond2,NULL, ecran,&vie->position);
SDL_Flip(ecran);
}
else if((*i)==2)
{

SDL_BlitSurface(vie->fond3,NULL, ecran,&vie->position);
SDL_Flip(ecran);
}
 else if((*i)>=3)
{
SDL_BlitSurface(vie->fond4,NULL, ecran, &vie->position);
SDL_Flip(ecran);
SDL_Quit();
}




}
/*void scrolling(SDL_Surface *screen,SDL_Surface *imageDeFond ,int continuer,SDL_Rect positionFond)
     {
    positionFond.x = 0;
    positionFond.y = 0;
    positionFond.h =1080;
    positionFond.w =1920;

    
    imageDeFond = IMG_Load("map.png");
   
      SDL_BlitSurface(imageDeFond,&positionFond, screen, NULL);
              
    SDL_Flip(screen);
    
 
    SDL_Event event;
    SDL_EnableKeyRepeat(10,10);
 
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
            case SDL_KEYDOWN:

        switch(event.key.keysym.sym)

        {

            case SDLK_RIGHT: // Flèche droite
            	
                if  ( positionFond.x<=2500)
       
            positionFond.x += 100;

     
            
       
                SDL_BlitSurface(imageDeFond,&positionFond, screen, NULL);
            
                
    SDL_Flip(screen);

                break;

            case SDLK_LEFT: // Flèche gauche
            	if ( positionFond.x>=0)
        
            positionFond.x -= 100;
     
         
                SDL_BlitSurface(imageDeFond,&positionFond, screen, NULL);
				
                
    SDL_Flip(screen);

                break;
       case SDLK_UP : 
          positionFond.y -=100;
          SDL_BlitSurface(imageDeFond,&positionFond,screen,NULL);
          SDL_Flip(screen);
          break; 


        case SDLK_DOWN:
       positionFond.y +=100;
       SDL_BlitSurface(imageDeFond,&positionFond,screen,NULL);
       SDL_Flip(screen);
       break;
              

        }

        break;    
        }

       
        
    SDL_Flip(screen);
    }
}*/


