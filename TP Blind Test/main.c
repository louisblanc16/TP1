#include "tp3.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* fonction définie dans blindtest.c */
void play_song_excerpt_at(const char *filename, int start, int seconds);

int main() {

    Song songs[100];
    int nb;
    char nom[100];
    char reponse[256];
    int i;

    nb = load_songs("songs.txt", songs, 100);

    if (nb <= 0) {
        printf("Erreur chargement.\n");
        return 1;
    }

    srand(time(NULL));
    melanger_chansons(songs, nb);

    printf("Nom du joueur : ");
    scanf("%s", nom);

    for (i = 0; i < nb; i++) {

        printf("\nLecture du morceau %d...\n", i + 1);

        play_song_excerpt_at(songs[i].file, 0, 10);

        printf("Votre reponse : ");
        getchar();  /* vider le buffer */
        fgets(reponse, sizeof(reponse), stdin);
    }

    return 0;
}