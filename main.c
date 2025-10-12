#include <stdio.h>
#include "game.h"

int main() {
    printf("🎮 Flappy Bird - Démarrage...\n");
    
    game_init();
    game_run(); 
    game_cleanup();
    
    printf("Au revoir !\n");
    return 0;
}
