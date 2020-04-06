#include "character.h"
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"
char animChar (charac c, SDL_Surface *screen, SDL_Event event, char whichDirection){
  static int i=0, j=0;
  if (event.key.keysym.sym == SDLK_RIGHT) {
    j=13;
    if (i > 12){
       i = 0;
     SDL_BlitSurface(c.spriteright[i], NULL, screen, &c.positionChar);
     whichDirection = 'r';
     return whichDirection;
    }else{
  SDL_BlitSurface(c.spriteright[i], NULL, screen, &c.positionChar);
    i++;
  whichDirection = 'r';
  return whichDirection;
}
}else{
  if (event.key.keysym.sym == SDLK_LEFT) {
    i=13;
    if (j > 12){
       j = 0;
     SDL_BlitSurface(c.spriteleft[j], NULL, screen, &c.positionChar);
     whichDirection = 'l';
     return whichDirection;
    }else{
  SDL_BlitSurface(c.spriteleft[j], NULL, screen, &c.positionChar);
j++;
  whichDirection = 'l';
  return whichDirection;
}
}else{
  if(event.key.keysym.sym == SDLK_SPACE){
    if(whichDirection == 'l'){
      SDL_BlitSurface(c.jump_left, NULL, screen, &c.positionChar);
    }else{
    SDL_BlitSurface(c.jump, NULL, screen, &c.positionChar);
  }
}
}
}
return whichDirection;
}
void moveChar (SDL_Event event, SDL_Rect *posobj, int inWhichDir){
switch (event.key.keysym.sym){
  case SDLK_SPACE:
  if(inWhichDir != 1){
    posobj->y -=10;
  }
  break;
  case SDLK_RIGHT:
    if(inWhichDir != 2){
      posobj->x +=10;
    }
  break;
  case SDLK_LEFT:
    if(inWhichDir != 3){
        posobj->x -= 10;
      }
   break;
   case SDLK_DOWN:
     if(inWhichDir != 4){
         posobj->y += 10;
       }
    break;
  }
}
char animChar (charac c, SDL_Surface *screen, SDL_Event event, char whichDirection){
  static int i=0, j=0;
  if (event.key.keysym.sym == SDLK_RIGHT) {
    j=13;
    if (i > 12){
       i = 0;
     SDL_BlitSurface(c.spriteright[i], NULL, screen, &c.positionChar);
     whichDirection = 'r';
     return whichDirection;
    }else{
  SDL_BlitSurface(c.spriteright[i], NULL, screen, &c.positionChar);
    i++;
  whichDirection = 'r';
  return whichDirection;
}
}else{
  if (event.key.keysym.sym == SDLK_LEFT) {
    i=13;
    if (j > 12){
       j = 0;
     SDL_BlitSurface(c.spriteleft[j], NULL, screen, &c.positionChar);
     whichDirection = 'l';
     return whichDirection;
    }else{
  SDL_BlitSurface(c.spriteleft[j], NULL, screen, &c.positionChar);
j++;
  whichDirection = 'l';
  return whichDirection;
}
}else{
  if(event.key.keysym.sym == SDLK_SPACE){
    if(whichDirection == 'l'){
      SDL_BlitSurface(c.jump_left, NULL, screen, &c.positionChar);
    }else{
    SDL_BlitSurface(c.jump, NULL, screen, &c.positionChar);
  }
}
}
}
return whichDirection;
}
void moveChar (SDL_Event event, SDL_Rect *posobj, int inWhichDir){
switch (event.key.keysym.sym){
  case SDLK_SPACE:
  if(inWhichDir != 1){
    posobj->y -=10;
  }
  break;
  case SDLK_RIGHT:
    if(inWhichDir != 2){
      posobj->x +=10;
    }
  break;
  case SDLK_LEFT:
    if(inWhichDir != 3){
        posobj->x -= 10;
      }
   break;
   case SDLK_DOWN:
     if(inWhichDir != 4){
         posobj->y += 10;
       }
    break;
  }
}
