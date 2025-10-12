#include <stdio.h>
#include "display.h"

void clear_screen(void) {
    // Méthode optimale avec codes ANSI
    printf("\033[2J");  // Efface tout l'écran
    printf("\033[H");   // Place le curseur en haut à gauche
}

void draw_border(void) {
    // Bordure supérieure
    printf("┌");
    for (int i = 0; i < GAME_WIDTH - 2; i++) {
        printf("─");
    }
    printf("┐\n");
    
    // Milieu (côtés seulement)
    for (int i = 0; i < GAME_HEIGHT - 2; i++) {
        printf("│");
        for (int j = 0; j < GAME_WIDTH - 2; j++) {
            printf(" ");
        }
        printf("│\n");
    }
    
    // Bordure inférieure
    printf("└");
    for (int i = 0; i < GAME_WIDTH - 2; i++) {
        printf("─");
    }
    printf("┘\n");
}

void display_game_title(void) {
    printf("\n🎮 FLAPPY BIRD - Version ASCII\n");
    printf("   Développement en cours...\n\n");
}