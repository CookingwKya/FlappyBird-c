#include <stdio.h>
#include <stdlib.h>
#include "bird.h"

typedef struct Bird{
    int velocity_y;
    int x,y;
    int gravity;
    int jumpforce;
}Bird;

Bird* bird_create(void){ //fonction qui retourne un pointeur de type Bird, permettant de créer notre oiseau.
    Bird* bird =malloc(sizeof(Bird));
    bird->x=30;
    bird->y=10;
    bird->gravity=1;
    bird->velocity_y=0; //au repos au début
    bird->jumpforce=2;
    return bird;
};


void bird_draw(const Bird* bird){ //fonction qui ne retourne rien permettant de placer notre oiseau à sa position initiale de début de partie.
    printf("\033[%d;%dH", bird->y, bird->x);
    printf(">");
    printf("\033[41;1H");  // Curseur en bas à gauche après dessin
}

void bird_jump(Bird* bird){
    bird->y=-bird->jumpforce;
}

void bird_update(Bird* bird){
    bird->velocity_y=bird->velocity_y+bird->gravity; //vitesse verticale = vitesse verticale initiale(0) + gravité(4)
    bird->y=bird->velocity_y+bird->y;   //ancienne position plus vitesse
}

 
