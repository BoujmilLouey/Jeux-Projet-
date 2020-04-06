#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"

typedef struct {
 SDL_Surface * spriteleft[11];
 SDL_Surface * spriteright[11];
 SDL_Surface * jump;
 SDL_Surface * jump_left;
 SDL_Rect pmaxChar;
 SDL_Rect pminChar;
 SDL_Rect positionChar;
 SDL_Surface *livestext;
 SDL_Surface *scoretext;
 SDL_Rect scorePos;
 SDL_Rect posLives;
 int lives;
 int score;
 state s;
}charac;
charac initChar ();
char animChar (charac c, SDL_Surface *screen, SDL_Event event, char whichDirection);
char animCharMouse (charac c, SDL_Surface *screen, SDL_Event event);
SDL_Surface * updateScore(int *score);
SDL_Surface * updateLives(int *lives);
state restoreState();
#endif




