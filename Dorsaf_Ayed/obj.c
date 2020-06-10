
/**
*  @file obj.c 
*/

#include <stdio.h>
#include  <stdlib.h>
#include  <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "obj.h"
/**
* @brief To initialize an object on screen .
* @param obj the object .
* @param url the url of the image.
* @return Nothing
*/

void initialiserObj( Objet *obj , char name[] , int x , int y ) 
{

	       obj->image =  IMG_Load(name); 
	      if  ( obj->image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     else 
     {
 
     obj->position.x  =  x ; 
     obj->position.y  =  y ; 
     obj->position.h  =  obj->image->h ;
obj->position.w = obj->image->w ;
}

}
/**
* @brief To show the object on screen .
* @param scren the screen
* @param obj the object
* @return Nothing
*/
void affichageObj ( Objet obj , SDL_Surface *screen) 
{

SDL_BlitSurface(obj.image, NULL, screen, &(obj.position));
SDL_Flip(screen);

}
