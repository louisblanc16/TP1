#include "tp3.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    Song songs[100];
    int nb;

    nb = load_songs("songs.txt", songs, 100);

    if (nb <= 0) {
        printf("Aucune chanson chargee.\n");
        return 1;
    }

    srand(time(NULL));

    melanger_chansons(songs, nb);

    printf("%d morceaux charges et melanges.\n", nb);

    return 0;
}