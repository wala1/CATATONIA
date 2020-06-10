/**
*  @file obj.h 
*/


#ifndef FONCTIONS_H_
#define FONCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
/**
* @struct objet
* @brief struct for object 
*/
typedef struct 
{
SDL_Surface *image ; /*!< Surface. */
SDL_Rect position ; /*!< Rectangle*/

} Objet ; 

void initialiserObj( Objet *obj , char name[] , int x , int y ) ; 
void affichageObj ( Objet obj , SDL_Surface *screen) ; 



#endif /* FONCTIONS_H_ */
