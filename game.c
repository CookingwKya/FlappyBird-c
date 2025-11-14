#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "display.h"
#include "bird.h"
#include "utils.h"

int gamerunning =1;

void game_run(void) {
 Bird* mon_oiseau=bird_create();    

    while(gamerunning){
        // Phase 1: Affichage statique
        clear_screen();
        display_game_title();
        draw_border();
       
        bird_draw(mon_oiseau);
        bird_update(mon_oiseau);
        sleep_ms(33);
    }
    free(mon_oiseau);
}

