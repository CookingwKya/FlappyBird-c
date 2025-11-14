#include <unistd.h>
#include <stdio.h>

int main() {
    printf("Test usleep...\n");
    usleep(1000000);  // 1 seconde
    printf("Fin du test\n");
    return 0;
}
