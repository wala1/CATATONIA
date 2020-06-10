
/**
 * @file codeanim.c
*/


#include "functions.h"



/**
* @brief cutting spritesheet 
* @param fileSprite 
* @param nbCaseLigne the numbre of lines 
*@param nbCaseCol the numbre of columns
* @return tabSprite
*/

SDL_Rect * decoupeSprite(char * fileSprite, int nbCaseLigne, int nbCaseCol)
{
    SDL_Surface * feuilleDeSprite = NULL;
    SDL_Rect * tabSprite;
    SDL_Rect coupe;
    int i,j;
    int nbCase=0;

    tabSprite = malloc((nbCaseCol*nbCaseLigne)*sizeof(SDL_Rect));
    feuilleDeSprite = IMG_Load(fileSprite);
    coupe.h = feuilleDeSprite->h/nbCaseLigne;
    coupe.w =feuilleDeSprite->w/nbCaseCol;

    for(i=0; i < nbCaseLigne; i++)
    {
        coupe.y = coupe.h*i;
        for(j=0;j<nbCaseCol; j++)
        {
            coupe.x = coupe.w*j;
            tabSprite[nbCase] = coupe;
            nbCase++;
        }
    }
    SDL_FreeSurface(feuilleDeSprite);
    return tabSprite;
}

/**
* @brief Blit sprite  
* @param fileImage the name of the image
* @param position : the position of "fileImage"
* @param clip 
* @return nothing
*/

void blitSpriteSurSurface(SDL_Surface * surfaceBlit, char * fileImage, SDL_Rect position, SDL_Rect * clip)
{
    SDL_Surface* loadedImage = NULL;
    loadedImage = IMG_Load(fileImage);
    SDL_BlitSurface(loadedImage, clip, surfaceBlit, &position);
    SDL_FreeSurface(loadedImage);
}

/**
* @brief the time for the animation 
* @param millisecondes :an integer containing the time of the animation you want 
* @return nothing
*/
void attendreTemps(int millisecondes)
{
    int startTicks = SDL_GetTicks();

    while((SDL_GetTicks() - startTicks) < millisecondes)
    {
        SDL_Delay(1);
    }
}
/**
* @brief Animate sprite  
* @param clip
* @param fichierSprite :the name of the image
* @param position
* @param nbLigne :the number of lines
* @param nbColonne:the number of columns
* @param tempsAnimation
* @return nothing
*/

void animerSprite(SDL_Rect * clip, SDL_Surface * surfaceBlit, char * fichierSprite, SDL_Rect position, int nbLigne, int nbColonne, int tempsAnimation)
{
    static int i = 0;
    blitSpriteSurSurface(surfaceBlit, fichierSprite, position, &clip[i]);
    i++;
    if(i==(nbLigne*nbColonne))
        i=0;
    attendreTemps(tempsAnimation);
}

