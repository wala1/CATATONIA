/**
 * @file time.h
*/
 

#pragma once
#include<SDL/SDL.h>
#include<SDL/SDL_ttf.h>

/** 
 * @struct Time
 * @brief struct for thetime
*/
typedef struct Time {
	SDL_Surface *msg; /*!< Surface. */
	TTF_Font *font;
	int time;
	char timeString[10];
} Time;

void initializerTemps(Time *time);
void afficherTemps(Time *time,SDL_Surface **screen);
