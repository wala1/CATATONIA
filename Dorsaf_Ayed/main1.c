/**
* @file main1.c
* @brief intégration (test).
* @author Dorsaf Ayed
* @version 1.2
* @date Mai 15, 2020
*
* Intégration entre vie , collision bounding box et scrolling 
*
*/





#include <stdio.h>
#include  <stdlib.h>
#include  <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "obj.h"
#include "vie.h"
#include "vie.c"
#include "obj.c"


int main()
{
SDL_Surface *screen =NULL ,*imageDeFond=NULL; 
 SDL_Rect positionFond; 
Objet Obj, Obj1 ; 
vie vie;
SDL_Event event ; 
int done=0 , i=0 ; 
    positionFond.x = 0;
    positionFond.y = 0;
    positionFond.h =800;
    positionFond.w =1200;

 if  ( SDL_Init ( SDL_INIT_VIDEO )  == -1 )  
     { 
         printf ( "Can not init SDL \n " ); 
 
     } 

     screen  =  SDL_SetVideoMode ( 1200 , 800 ,  32 , SDL_HWSURFACE|SDL_DOUBLEBUF);//1200 800
           imageDeFond = IMG_Load("map.png"); 
SDL_BlitSurface(imageDeFond,&positionFond, screen, NULL);

    initialiservie(&vie) ;
    initialiserObj( &Obj ,"detective.png" ,  0 ,  250 ) ; 
    affichageObj (Obj ,screen) ;
    initialiserObj( &Obj1 ,"en.png" ,  300 ,  250 ) ; 
    affichageObj (Obj1 ,screen) ;
    
  SDL_Flip(screen);

 SDL_EnableKeyRepeat(15,15) ;//10,10
    while  ( done==0 )  { 
         while  (SDL_PollEvent ( &event ))  { 
             switch  ( event.type )  { 
             case  SDL_QUIT : 
                 done  =  1 ; 
                 break ;  
    case SDL_KEYDOWN:

        switch(event.key.keysym.sym)

        {
      case SDLK_ESCAPE : 
done=1 ; 

  case SDLK_LEFT : 
if (Obj.position.x<=400 && positionFond.x>=10)
           { Obj.position.x-=7 ;
            positionFond.x -=50;
            }       
    else if (Obj.position.x>=10)  
        {Obj.position.x -= 7;}
         
                SDL_BlitSurface(imageDeFond,&positionFond, screen, NULL);
		if (positionFond.x<100 && positionFond.y<100)
 {affichageObj (Obj1 ,screen) ;}		
                
    SDL_Flip(screen);
  break ; 

  case SDLK_RIGHT : 
           if  (Obj.position.x>800 && positionFond.x<=6255)
                  {
                     Obj.position.x+=7 ; 
                     positionFond.x +=50;
                  }
 else if (Obj.position.x<=900) 
                  {
                    Obj.position.x +=7;
                  }
            
       SDL_BlitSurface(imageDeFond,&positionFond, screen, NULL);
       if (positionFond.x<100 && positionFond.y<100)
 {affichageObj (Obj1 ,screen) ;}
    SDL_Flip(screen);
 
  break ; 

  case SDLK_UP :
      if (Obj.position.y<=100 && positionFond.y>=5)
           { Obj.position.y-=7 ; 
            positionFond.y-=50;
            }
    else if (Obj.position.y>=10)  
        {Obj.position.y -= 7;}
         
                SDL_BlitSurface(imageDeFond,&positionFond, screen, NULL);
	if (positionFond.x<100 && positionFond.y<100)
 {affichageObj (Obj1 ,screen) ;}
                
    SDL_Flip(screen);
  break ; 
  
  case SDLK_DOWN :
 if  (Obj.position.y>=550&& positionFond.y<=40)
        
       {     positionFond.y+= 50;
             Obj.position.y+=7 ; 
        }
        else if (Obj.position.y<=650) 
            Obj.position.y +=7;
            
       
                SDL_BlitSurface(imageDeFond,&positionFond, screen, NULL);
         if (positionFond.x<100 && positionFond.y<100)
 {affichageObj (Obj1 ,screen) ;}
                
    SDL_Flip(screen);
 
  break ; 


break ; 


		 
	
}

affichageObj (Obj ,screen) ;
//affichageObj (Obj1 ,screen) ;

}

affichervie(&vie, &Obj.position,Obj1.position,screen,&i);
SDL_Flip(screen);
}


//SDL_FreeSurface(imageDeFond);

}
return 0 ; 
}
