
/**
 *@file main.c
 *@brief Animation 
 *@author Alimi Wala
 *@date Apr30, 2020
 *@version 1.2
 *
 *testing program
 *
*/

#include "functions.h"
#include "codeanim.c"



#define LARGEURECRAN 640
#define HAUTEURECRAN 480
#define TITREECRAN "Ma fenetre SDL"
#define ICONE "icon.png"




int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL;
    int continuer = 1;
    SDL_Event event;
    
   
    char fichierSprite[] = "jaune.JPG";
    int nbLigne=1;
    int nbColonne=8;
    int i=0;
    int tempsAnimation = 100;
    SDL_Rect position = {350,200};
    SDL_Rect * tabSpriteentity= NULL; 
    tabSpriteentity = decoupeSprite(fichierSprite, 1, 8);





if (SDL_Init(SDL_INIT_VIDEO) == -1) // Démarrage de la SDL. Si erreur :
    {
        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError()); // Écriture de l'erreur
        exit(EXIT_FAILURE); // On quitte le programme
    }


ecran = SDL_SetVideoMode(900,860, 32, SDL_HWSURFACE); // On tente d'ouvrir une fenêtre
    if (ecran == NULL) // Si l'ouverture a échoué, on le note et on arrête
    {
        fprintf(stderr, "Impossible de charger le mode vidéo : %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }




while(continuer)
  {
        SDL_PollEvent(&event);
           switch(event.type)
          {
              case SDL_QUIT:
                continuer = 0;
              break;
          }


     animerSprite(tabSpriteentity, ecran, fichierSprite, position, 1, 8, 200);
     SDL_Flip(ecran);
 }
SDL_Quit();
return 0;
}

