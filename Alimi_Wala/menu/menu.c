#include "SDL/SDL.h"
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>

#include <SDL/SDL_ttf.h>
void pause();
int choixhk(int h)
{


                        if (h==1)//key
                        {

                          return 1;
                        }
                        else if (h==2)//mouse
                        {
                           return 2;
                        }
                        else if (h==3)//controller
                        {
                            return 3; 
                        }
                        


}
 int choixck(int c )
{

                          if (c==1) //character1
                            {
                               return 1;
                                                      
                            }
                            else if (c==2)//character 2
                            {
                                  return 2;    
                            }
                          

                           

}
int choixcm(SDL_Rect positionclic,SDL_Event event)
{

                        positionclic.x=event.button.x;
                        positionclic.y =event.button.y;
                        if (event.button.x>0 && event.button.x<250 && event.button.y>10 && event.button.y<418)//c1
                        {
                            return 1;
                        }

                        else if (event.motion.x>200 && event.motion.x<408 && event.motion.y>50 && event.motion.y<176)//c2
                        {
                            return 2;

                        }
                       
                        


}

int choixhm(SDL_Rect positionclic,SDL_Event event)
{

                        positionclic.x=event.button.x;
                        positionclic.y =event.button.y;
                        if (event.button.x>272 && event.button.x<510 && event.button.y>71 && event.button.y<123)//keyboard
                        {
                            return 1;
                        }

                        else if (event.button.x>272 && event.button.x<509 && event.button.y>158 && event.button.y<214)//mouse
                        {
                            
                          return 2;
                        }
                        else if (event.button.x>272 && event.button.x<511 && event.button.y>248 && event.button.y<300)//controller
                        {   
                           return 3;
                           
                        }
                        
}

int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL, *play = NULL,*settings= NULL, *about=NULL,*quit=NULL,*image5=NULL,*image6=NULL,*image7=NULL, *play1=NULL, *about1=NULL, *settings1=NULL, *quit1=NULL,*image8=NULL, *image10 = NULL,*volumem1 = NULL, *volumep=NULL,*volumep1=NULL,*mute=NULL,*mute1=NULL,*fullscreen=NULL,*volumem = NULL,*fullscreen1 = NULL, *back1=NULL,*back=NULL,*jouers=NULL,*new=NULL,
                 *new1=NULL,*old=NULL,*old1=NULL,*backj=NULL,*backj1=NULL,
*optionss=NULL,*key=NULL,*mouse=NULL,*controller=NULL,*characters=NULL,
*key1=NULL,*mouse1=NULL,*c1=NULL,*c11=NULL,*c2=NULL,*backc=NULL,*backc1=NULL,*c21=NULL,*imagec=NULL,*controller1=NULL,*optionsc=NULL,*backh=NULL,*backh1=NULL,*hows=NULL,*how=NULL,*how1=NULL,*characters1=NULL,*backo=NULL,*backo1=NULL;


    SDL_Rect positionFond,positionplay,positionsettings,positionquit
    ,positionabout,positionclic,positionimage5,positionimage6,positionimage7,
    positionimage8,positionimage9,positionplay1,positionsettings1
    ,positionquit1,positionabout1,positionvolumep1,positionvolumep, positionvolumem1,positionvolumem,positionmute1,positionmute, positionfullscreen,positionfullscreen1,positionback1,positionback,positionjouers,
    positionnew,positionnew1,positionold,positionold1,positionbackj,positionkey,
positionmouse,positioncharacters,positioncontroller,positionoptionss,
positionkey1,
positionmouse1,positionc1,positionc11,positionbackc,positionbackc1,positionimagec,positionc2,positionc21,positioncharacters1,positionbackh1,positionbackh,positioncontroller1,positionhows,positionhow,positionhow1,positionoptionsc,positionbackj1,positionbacko1,positionbacko;




    putenv("SDL_VIDEO_CENTERED=1");//centrer l ecran


    positionFond.x = 0;
    positionFond.y = 0;
    positionsettings.x = 272;
    positionsettings.y = 161;
    positionabout.x = 274;
    positionabout.y = 248;
    positionplay.x = 274;
    positionplay.y = 72;
    positionquit.x = 272;
    positionquit.y = 332;
    positionimage5.x = 0;
    positionimage5.y = 0;
    positionimage6.x = 0;
    positionimage6.y = 0;
    positionimage7.x = 0;
    positionimage7.y = 0;
    positionsettings1.x = 272;
    positionsettings1.y = 161;
    positionabout1.x = 274;
    positionabout1.y = 248;
    positionplay1.x = 274;
    positionplay1.y = 72;
    positionquit1.x = 272;
    positionquit1.y = 332;
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
    positionjouers.x=0;
    positionjouers.y=0;
    positionnew.x=240;
    positionnew.y=103;
    positionold.x=240;
    positionold.y=228;
    positionbackj.x=240;
    positionbackj.y=345;
    positionnew1.x=240;
    positionnew1.y=103;
    positionold1.x=240;
    positionold1.y=228;
    positionbackj1.x=240;
    positionbackj1.y=345;
    positionoptionsc.x=0;
    positionoptionsc.y=0;
    positionkey.x=272;
    positionkey.y=71;
    positionmouse.x=272;
    positionmouse.y=158;
    positioncontroller.x=272;
    positioncontroller.y=248;
    positioncharacters.x=258;
    positioncharacters.y=108;
    positionkey1.x=272;
    positionkey1.y=71;
    positionmouse1.x=272;
    positionmouse1.y=158;
    positioncontroller1.x=272;
    positioncontroller1.y=248;
    positioncharacters1.x=258;
    positioncharacters1.y=108;
    positionbacko.x=270;
    positionbacko.y=365;
    positionbacko1.x=270;
    positionbacko1.y=365;
    positionhow.x=260;
    positionhow.y=230;
    positionhow1.x=260;
    positionhow1.y=230;
    positionhows.x=0;
    positionhows.y=0;
    positionbackh.x = 265;
    positionbackh.y = 328;
    positionbackh1.x = 265;
    positionbackh1.y = 326;
    positionc1.x=0;
    positionc1.y=10;
    positionc2.x=390;
    positionc2.y=15;
    positionc11.x=0;
    positionc11.y=10;
    positionc21.x=390;
    positionc21.y=15;
    positionimagec.x=0;
    positionimagec.y=0;
    positionbackc.x=525;
    positionbackc.y=384;
    positionbackc1.x=525;
    positionbackc1.y=384;



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









    imageDeFond = IMG_Load("bgmenu.png");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);



    //creer une police
    TTF_Font *fontTest=NULL;
    fontTest=TTF_OpenFont("Hitman.ttf",15);
    SDL_Color fontColor= {255,255,255};
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
    SDL_Flip(ecran);

    settings = IMG_Load("setting.png");

    SDL_BlitSurface(settings, NULL, ecran, &positionsettings);
    SDL_Flip(ecran);

    about = IMG_Load("options.png");

    SDL_BlitSurface(about, NULL, ecran, &positionabout);
    SDL_Flip(ecran);

    quit = IMG_Load("quit.png");

    SDL_BlitSurface(quit,&positionFond,ecran,&positionquit);
    SDL_Flip(ecran);

    play1 = IMG_Load("play1.png");

    //SDL_BlitSurface(play1,&positionFond,ecran,&positionplay1);

    settings1 = IMG_Load("settings1.png");

    //SDL_BlitSurface(settings1,&positionFond,ecran,&positionsettings1);

    about1 = IMG_Load("options3.jpg");

    //SDL_BlitSurface(about1,&positionFond,ecran,&positionabout1);

    quit1 = IMG_Load("quit1.png");
    //SDL_BlitSurface(quit1,&positionFond,ecran,&positionquit1);


    SDL_Flip(ecran);
    image6 = IMG_Load("image6.png");

    image5 = IMG_Load("image5.png");

    image7 = IMG_Load("image7.png");



    volumem1=IMG_Load("volumem1.png");

    volumep1=IMG_Load("volumep1.png");


    fullscreen1=IMG_Load("fullscreen1.png");



    mute1=IMG_Load("mute1.png");



    back1=IMG_Load("back1.png");

    new=IMG_Load("new.JPG");

    new1=IMG_Load("new+.JPG");

    old=IMG_Load("old.JPG");

    old1=IMG_Load("old+.JPG");

    backj==IMG_Load("backj.jpg");

    backj1=IMG_Load("backj+.jpg");

    jouers=IMG_Load("jouers90.png");
    SDL_Flip(ecran);
    optionsc=IMG_Load("optionsc.png");
    characters=IMG_Load("characters.jpg");
    characters1=IMG_Load("characters+.jpg");
    how=IMG_Load("how.jpg");
     how1=IMG_Load("how+.jpg");
    hows=IMG_Load("hows.png");

    backo=IMG_Load("backj.jpg");
    backo1=IMG_Load("backj+.jpg");
    key=IMG_Load("key.jpg");
    key1=IMG_Load("key+.jpg");
    mouse==IMG_Load("wmouse.jpg");
    mouse1=IMG_Load("wmouse+.jpg");
    controller=IMG_Load("wcontroller.jpg");
    controller1=IMG_Load("wcontroller+.jpg");
    backh=IMG_Load("backj.jpg");
    backh1=IMG_Load("backj+.jpg");
    c1=IMG_Load("perso1.png");
    c2=IMG_Load("perso2.png");
   
    c11=IMG_Load("perso1+.png");
    c21=IMG_Load("perso2+.png");
    
    imagec=IMG_Load("imageo.png");
    backc=IMG_Load("backj.jpg");
    backc1=IMG_Load("backj+.jpg");

    


    int done = 1,i=50;
    int k,etat=0,s=1,v=60,p=1,o=1,h=1,c=1,chhk,chhm,chck,chcm;
    while(done)
    {
        SDL_Event event;

        if(etat==0)
        {
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
                        {

                            etat=2;
                        }
                        else if (k==2)
                        {
                            etat=1;
                        }
                        else if (k==3)
                        {
                             etat=3;
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
                            etat=2;
                        }

                        else if (event.button.x>272 && event.button.x<512 && event.button.y>158 && event.button.y<208)//option
                        {
                            etat=1;

                        }
                        else if (event.button.x>272 && event.button.x<512 && event.button.y>248 && event.button.y<298)//about
                        {
                            etat=3;
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
                    {
                        SDL_BlitSurface(play1,&positionFond,ecran,&positionplay1);

                        k=1;
                    }

                    else if (event.motion.x>272 && event.motion.x<512 && event.motion.y>158 && event.motion.y<208)//option
                    {
                        SDL_BlitSurface(settings1,&positionFond,ecran,&positionsettings1);

                        k=2;


                    }
                    else if (event.motion.x>272 && event.motion.x<512 && event.motion.y>248 && event.motion.y<298)//credit
                    {
                        SDL_BlitSurface(about1,&positionFond,ecran,&positionabout1);
                        k=3;
                    }
                    else if (event.motion.x>272 && event.motion.x<512 && event.motion.y>326 && event.motion.y<376)//exit
                    {
                        SDL_BlitSurface(quit1,&positionFond,ecran,&positionquit1);
                        k=4;
                    }



                }//case


                }//switch


            }//while thenya
        }//etat=0
        else if(etat==1)//////////settings
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
                            {
                                v=0;
                                Mix_VolumeMusic(v);


                            }
                            else if (s==4)
                            {
                                ecran = SDL_SetVideoMode(790,441, 32, SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_FULLSCREEN);
                            }
                            else if(s==5)
                            {
                                etat=0;
                            }
                        }
                    }




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
            }//etat=1
 
            else if(etat==2) //play
            {
                SDL_BlitSurface(jouers,&positionFond,ecran,&positionjouers);
                
                if(p==1)
                {
                    SDL_BlitSurface(new1,&positionFond,ecran,&positionnew1);
                    SDL_BlitSurface(old,&positionFond,ecran,&positionold);

                    SDL_BlitSurface(backj,&positionFond,ecran,&positionbackj);


                }
                else if(p==2)
                {
                    SDL_BlitSurface(new,&positionFond,ecran,&positionnew);
                    SDL_BlitSurface(old1,&positionFond,ecran,&positionold1);

                    SDL_BlitSurface(backj,&positionFond,ecran,&positionbackj);

                }
                else if(p==3)
                {
                    SDL_BlitSurface(new,&positionFond,ecran,&positionnew);
                    SDL_BlitSurface(old,&positionFond,ecran,&positionold);
                    SDL_BlitSurface(backj1,&positionFond,ecran,&positionbackj1);
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
                            if (p==1)
                            {
                                p=3;
                            }
                            else
                            {
                                p--;
                            }
                        }

                        else if (event.key.keysym.sym == SDLK_DOWN)
                        {

                            if (p==3)
                            {
                                p=1;
                            }
                            else
                            {
                                p++;
                            }
                        }
                        else if ((event.key.keysym.sym == SDLK_SPACE)||(event.key.keysym.sym == SDLK_RETURN))
                        {
                            //if to9rs 3al boutton
                            if (p==1)
                            {
                                                     ecran = SDL_SetVideoMode(790,441, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
SDL_Flip(ecran);

                            }
                            else if (p==2)
                            {
                                       SDL_BlitSurface(image6,&positionFond,ecran,&positionimage6);
                              SDL_Flip(ecran);
                              Mix_VolumeMusic(v);
                              SDL_Delay(5000);
                            }
                            else if (p==3)
                            {
                                etat=0;
                               
                                Mix_VolumeMusic(v);


                            }

                        }//tsakr if to9rs 3l boutton
                  
                    }//case keydown
                   case SDL_MOUSEMOTION:
                    {
                        positionclic.x=event.motion.x;
                        positionclic.y =event.motion.y;
                        if (event.motion.x>240 && event.motion.x<508 && event.motion.y>103 && event.motion.y<160)
                        {
                            p=1;
                        }

                        else if (event.motion.x>240&& event.motion.x<509&& event.motion.y>228 && event.motion.y<288)
                        {
                            p=2;
                        }
                        else if (event.motion.x>240&& event.motion.x<509&& event.motion.y>200 && event.motion.y<405)
                        {
                            p=3;
                        }
                     
                    }//case mousemotion
                   case SDL_MOUSEBUTTONDOWN:
                    {
                        if (event.button.button ==SDL_BUTTON_LEFT)
                        {
                            positionclic.x=event.button.x;
                            positionclic.y =event.button.y;
                            if (event.button.x>240 && event.button.x<508 && event.button.y>103 && event.button.y<160)//TO9RS 3LA NEW
                            {
                               ecran = SDL_SetVideoMode(790,441, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
SDL_Flip(ecran);
                            }

                            else if (event.button.x>240 && event.button.x<509 && event.button.y>228 && event.button.y<288)//YO9RS 3LA OLD
                            {
                               SDL_BlitSurface(image6,&positionFond,ecran,&positionimage6);
                             SDL_Flip(ecran);
                             Mix_VolumeMusic(v);
                             SDL_Delay(5000);

                            }
                            else if (event.button.x>240 && event.button.x<509 && event.button.y>345 && event.button.y<405)//NO SOUND
                            {
                                etat=0;
                               
                                Mix_VolumeMusic(v);
                            }
                            
                        }//if

                    }//case

                    }//switch
                }//while thenya

            }//etat==2


          else 
             {
              

       if(etat==3)///options
                   {
SDL_BlitSurface(optionsc,&positionFond,ecran,&positionoptionsc);
                
                if(o==1) //characters
                {
           SDL_BlitSurface(characters1,&positionFond,ecran,&positioncharacters1);
SDL_BlitSurface(how,&positionFond,ecran,&positionhow);
        SDL_BlitSurface(backj,&positionFond,ecran,&positionbackj);


                }
                else if(o==2)//howtoplay
                {
                    SDL_BlitSurface(characters,&positionFond,ecran,&positioncharacters);
                    SDL_BlitSurface(how1,&positionFond,ecran,&positionhow1);

                    SDL_BlitSurface(backj,&positionFond,ecran,&positionbackj);

                }
                else if(o==3)//back
                {
                    SDL_BlitSurface(characters,&positionFond,ecran,&positioncharacters);
                    SDL_BlitSurface(how,&positionFond,ecran,&positionhow);

                    SDL_BlitSurface(backj1,&positionFond,ecran,&positionbackj1);

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
                            if (o==1)
                            {
                                o=3;
                            }
                            else
                            {
                                o--;
                            }
                        }

                        else if (event.key.keysym.sym == SDLK_DOWN)
                        {

                            if (o==3)
                            {
                                o=1;
                            }
                            else
                            {
                                o++;
                            }
                        }
                        else if ((event.key.keysym.sym == SDLK_SPACE)||(event.key.keysym.sym == SDLK_RETURN))
                        {
                            //click characters
                            if (o==1)
                            {
                                etat=5;                      
                            }
                            else if (o==2)//howtoplay
                            {
                                        etat=4;
                            }
                            else if (o==3)//back
                            {
                                etat=0;
                               
                                Mix_VolumeMusic(v);


                            }

                        }//tsakr if to9rs 3l boutton
                  
                    }//case keydown
                  case SDL_MOUSEMOTION:
                    {
                        positionclic.x=event.motion.x;
                        positionclic.y =event.motion.y;
                        if (event.motion.x>258 && event.motion.x<496 && event.motion.y>108 && event.motion.y<160)
                        {
                            o=1;
                        }

                        else if (event.motion.x>260&& event.motion.x<500&& event.motion.y>230 && event.motion.y<284)
                        {
                            o=2;
                        }
                        else if (event.motion.x>240&& event.motion.x<509&& event.motion.y>200 && event.motion.y<405)
                        {
                            o=3;
                        }
                     
                    }//case mousemotion
                   case SDL_MOUSEBUTTONDOWN:
                    {
                        if (event.button.button ==SDL_BUTTON_LEFT)
                        {
                            positionclic.x=event.button.x;
                            positionclic.y =event.button.y;
                            if (event.button.x>258 && event.button.x<496 && event.button.y>108 && event.button.y<160)//characters
                            {
                                etat=5;
                            }

                            else if (event.button.x>260&& event.button.x<500&& event.button.y>230 && event.button.y<284)//howtoplay
                            {
                                etat=4;

                            }
                            else if (event.button.x>240 && event.button.x<509 && event.button.y>345 && event.button.y<405)//NO SOUND
                            {
                                etat=0;
         
                                Mix_VolumeMusic(v);
                            }
                            
                        }//if

                    }//case

                    }//switch
                }//while thenya
                
            }//if etat=3
        else if(etat==4) //click : how to play
                    {
             SDL_BlitSurface(hows,&positionFond,ecran,&positionhows);
             if(h==1)
            {
                SDL_BlitSurface(key1,&positionFond,ecran,&positionkey1);
                SDL_BlitSurface(mouse,&positionFond,ecran,&positionmouse);
                SDL_BlitSurface(controller,&positionFond,ecran,&positioncontroller);
                SDL_BlitSurface(backh,&positionFond,ecran,&positionbackh);





            }
            else if (h==2)
            {
                SDL_BlitSurface(key,&positionFond,ecran,&positionkey);
                SDL_BlitSurface(mouse1,&positionFond,ecran,&positionmouse1);
                SDL_BlitSurface(controller,&positionFond,ecran,&positioncontroller);
                SDL_BlitSurface(backh,&positionFond,ecran,&positionbackh);

            }
            else if (h==3)
            {
                SDL_BlitSurface(key,&positionFond,ecran,&positionkey);
                SDL_BlitSurface(mouse,&positionFond,ecran,&positionmouse);
                SDL_BlitSurface(controller1,&positionFond,ecran,&positioncontroller1);
                SDL_BlitSurface(backh,&positionFond,ecran,&positionbackh);

            }
            else if (h==4)
            {
                SDL_BlitSurface(key,&positionFond,ecran,&positionkey);
                SDL_BlitSurface(mouse,&positionFond,ecran,&positionmouse);
                SDL_BlitSurface(controller,&positionFond,ecran,&positioncontroller);
                SDL_BlitSurface(backh1,&positionFond,ecran,&positionbackh1);

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
                        if (h==1)
                        {
                            h=4;
                        }
                        else
                        {
                            h--;
                        }
                    }

                    else if (event.key.keysym.sym == SDLK_DOWN)
                    {

                        if (h==4)
                        {
                            h=1;
                        }
                        else
                        {
                            h++;
                        }
                    }
                    else if ((event.key.keysym.sym == SDLK_SPACE)||(event.key.keysym.sym == SDLK_RETURN)) //fct  
                    {
                       
                         chhk=choixhk(h);
                       if (h==4)//back
                        {
                           etat=3;
                        }

                    }
                    break;
                }//case key

                 case SDL_MOUSEMOTION:
                {
                    positionclic.x=event.motion.x;
                    positionclic.y =event.motion.y;
                    if (event.motion.x>272 && event.motion.x<510 && event.motion.y>71 && event.motion.y<123)//keyboard
                    {
                 

                        h=1;
                    }

                    else if (event.motion.x>272 && event.motion.x<509 && event.motion.y>158 && event.motion.y<214)//mouse
                    {
                        

                        h=2;


                    }
                    else if (event.motion.x>272 && event.motion.x<511 && event.motion.y>248 && event.motion.y<300)//controller
                    {
                        
                        h=3;
                    }
                    else if (event.motion.x>265 && event.motion.x<534 && event.motion.y>328 && event.motion.y<388)//backh
                    {
                        
                        h=4;
                    }



                }//case
                 case SDL_MOUSEBUTTONDOWN:
                {
                    if (event.button.button ==SDL_BUTTON_LEFT)
                    {
                        positionclic.x=event.button.x;
                        positionclic.y =event.button.y;
                        
                        chhm=choixhm(positionclic,event);
                       if (event.button.x>265 && event.button.x<534 && event.button.y>328 && event.button.y<388)//backh
                        {
                           etat=3;
                        }
                    }//if

                }//case
               }//switch
              }//while

             
                  } //etat==4 wa9t n5dmou f etat==3
            else if(etat==5)//click : characters
               {

                 SDL_BlitSurface(imagec,&positionFond,ecran,&positionimagec);
                
                if(c==1) //character 1
                {
           SDL_BlitSurface(c11,&positionFond,ecran,&positionc11);
        SDL_BlitSurface(c2,&positionFond,ecran,&positionc2);
        
       SDL_BlitSurface(backc,&positionFond,ecran,&positionbackc);


                }
                else if(c==2)//character 2
                {
                    SDL_BlitSurface(c1,&positionFond,ecran,&positionc1);
        SDL_BlitSurface(c21,&positionFond,ecran,&positionc21);
         
SDL_BlitSurface(backc,&positionFond,ecran,&positionbackc);

                }
               
                else if(c==3)//back
                {
                    SDL_BlitSurface(c1,&positionFond,ecran,&positionc1);
        SDL_BlitSurface(c2,&positionFond,ecran,&positionc2);
         
         SDL_BlitSurface(backc1,&positionFond,ecran,&positionbackc1);

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



                        if (event.key.keysym.sym == SDLK_RIGHT)
                        {
                            if (c==3)
                            {
                                c=1;
                            }
                            else
                            {
                                c++;
                            }
                        }

                        else if (event.key.keysym.sym == SDLK_LEFT)
                        {

                            if (c==1)
                            {
                                c=3;
                            }
                            else
                            {
                                c--;
                            }
                        }
                        else if ((event.key.keysym.sym == SDLK_SPACE)||(event.key.keysym.sym == SDLK_RETURN))//click characters: chc
                        {
                             chck=choixck(c);
                            if (c==3)//back
                            {
                               
                               etat=3;

                            }
                        }//tsakr if to9rs 3l boutton
                  
                    }//case keydown
                case SDL_MOUSEMOTION:
                {
                    positionclic.x=event.motion.x;
                    positionclic.y =event.motion.y;
                    if (event.motion.x>0 && event.motion.x<250 && event.motion.y>10 && event.motion.y<418)//c1
                    {
                        

                        c=1;
                    }

                    else if (event.motion.x>200 && event.motion.x<408 && event.motion.y>50 && event.motion.y<176)//c2
                    {
                        

                        c=2;


                    }
                    
                    else if (event.motion.x>252 && event.motion.x<794 && event.motion.y>384 && event.motion.y<444)//back
                    {
                        
                        c=3;
                    }



                }//case
             case SDL_MOUSEBUTTONDOWN:
                {
                    positionclic.x=event.motion.x;
                    positionclic.y =event.motion.y;
                    if (event.button.button ==SDL_BUTTON_LEFT)
                    {
                       chcm=choixcm(positionclic,event);
                       if (event.motion.x>252 && event.motion.x<794 && event.motion.y>384 && event.motion.y<444)//back
                        {
                            etat=3;
                        }

                    }//if

                }//case
                   }//switch
                  }//while


               }//etat==5
     SDL_Flip(ecran);
         }//else te3 etat==3
 
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
        SDL_FreeSurface(new);
        SDL_FreeSurface(new1);
        SDL_FreeSurface(old);
        SDL_FreeSurface(old1);
        SDL_FreeSurface(backj);
        SDL_FreeSurface(backj1);
        SDL_FreeSurface(jouers);
        SDL_FreeSurface(characters);
        SDL_FreeSurface(characters1);
        SDL_FreeSurface(backo);
        SDL_FreeSurface(backo1);
        SDL_FreeSurface(how);
        SDL_FreeSurface(how1);
        SDL_FreeSurface(optionsc);
        SDL_FreeSurface(optionsc);
        SDL_FreeSurface(hows);
        SDL_FreeSurface(key);
        SDL_FreeSurface(mouse);
        SDL_FreeSurface(controller);
        SDL_FreeSurface(key1);
        SDL_FreeSurface(mouse1);
        SDL_FreeSurface(controller1);
        SDL_FreeSurface(backh);
        SDL_FreeSurface(backh1);
        SDL_FreeSurface(c1);
        SDL_FreeSurface(c2);
        
        SDL_FreeSurface(c11);
        SDL_FreeSurface(c21);
        
        SDL_FreeSurface(backc1);
        SDL_FreeSurface(backc);

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
