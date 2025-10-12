#include <stdio.h>
#include "game.h"
#include "display.h"

void game_init(void) {
    printf("Initialisation du jeu...\n");
}

void game_run(void) {
    // Phase 1: Affichage statique
    clear_screen();
    display_game_title();
    draw_border();
    

}

void game_cleanup(void) {
    printf("Nettoyage du jeu...\n");
}