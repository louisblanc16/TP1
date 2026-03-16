#include "tp3.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

    Song songs[100];
    int nb;

    nb = load_songs("songs.txt", songs, 100);

    
    if (nb <= 0) {
        printf("Aucune chanson chargee.\n");
        return 1;
    }

    printf("%d morceaux charges.\n", nb);

    return 0;
}