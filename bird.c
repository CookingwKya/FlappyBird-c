#include <stdio.h>
#include <stdlib.h>
#include "bird.h"

Bird* bird_create(){
    Bird* bird =malloc(sizeof(Bird));
    bird->x=30; 
    bird->y=10;
    return bird;
}
