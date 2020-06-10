/**
 * @file functions.h
*/


#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>

#define BOTTOM 1
#define TOP 2
#define LEFT 3
#define RIGHT 4
#define RIEN 0



SDL_Rect * decoupeSprite(char * fileSprite, int nbCaseLigne,int nbCaseCol);
void blitSpriteSurSurface(SDL_Surface * surfaceBlit, char * fileImage, SDL_Rect position, SDL_Rect * clip);
void attendreTemps(int millisecondes);
void animerSprite(SDL_Rect * clip, SDL_Surface * surfaceBlit, char * fichierSprite, SDL_Rect position, int nbLigne, int nbColonne, int tempsAnimation);


#endif // FUNCTIONS_H
