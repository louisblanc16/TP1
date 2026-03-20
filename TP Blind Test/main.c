#include "tp3.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    Song songs[100];
    int nb;
    char nom[100];
    char reponse[256];
    int score = 0;
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

    printf("Bienvenue %s\n", nom);

    for (i = 0; i < nb; i++) {

        printf("\nLecture du morceau %d...\n", i + 1);

        play_song_excerpt_at(songs[i].file, 0, 10);

        printf("Votre reponse : ");
        getchar();
        fgets(reponse, sizeof(reponse), stdin);

        reponse[strcspn(reponse, "\n")] = '\0'; //ici je supprime le "\n" sinon il sera stocké comme tel et la comparaison ne sera pas juste, je me suis aidé d'une IA pour cette ligne.

        if (string_equals_normalized(reponse, songs[i].title)) {
            printf("Correct !\n");
            score++;
        } else {
            printf("Faux ! Titre attendu : %s\n", songs[i].title);
        }
    }

    return 0;
}