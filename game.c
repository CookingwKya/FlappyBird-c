#include <stdio.h>
#include "game.h"
#include "display.h"
#include "bird.h"

void game_run(void) {
    // Phase 1: Affichage statique
    clear_screen();
    display_game_title();
    draw_border();
    Bird* mon_oiseau=bird_create();
    bird_draw(mon_oiseau);

    

}

