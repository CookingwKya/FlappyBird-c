#include <stdio.h>
#include <stdlib.h>
#include "bird.h"

typedef struct Bird{
    int velocity;
    int x,y;
    int gravity;
}Bird;

Bird* bird_create(void){ //fonction qui retourne un pointeur de type Bird, permettant de créer notre oiseau.
    Bird* bird =malloc(sizeof(Bird));
    bird->x=30;
    bird->y=10;
    return bird;
};

void bird_draw(const Bird* bird){ //fonction qui ne retourne rien permettant de placer notre oiseau à sa position initiale de début de partie.
    printf("\033[%d;%dH", bird->y, bird->x);
    printf(">");
    printf("\033[41;1H");  // Curseur en bas à gauche après dessin
}

void bird_jump(Bird* bird){
    bird->y=bird->y+2;
}

void bird_update(Bird* bird){
    bird->gravity=-4;
    bird->velocity=bird->velocity+bird->gravity;
}

