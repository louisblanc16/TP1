#include <stdio.h>

void afficherMenu() {
    printf("===== GESTION DE NOTES =====\n");
    printf("1. Saisir le nombre d'eleves\n");
    printf("2. Saisir les notes des eleves\n");
    printf("3. Afficher toutes les notes\n");
    printf("4. Afficher la moyenne d'un eleve\n");
    printf("5. Afficher la moyenne generale\n");
    printf("6. Afficher la meilleure note de chaque controle\n");
    printf("0. Quitter\n");
}

int lireChoix() {
    int choix;
    printf("Votre choix : ");
    scanf("%d", &choix);
    return choix;
}

int saisirNombreEleves() {
    int nbEleves;
    printf("Entrez un nombre d'eleves (entre 1 et 30) : ");
    scanf("%d", &nbEleves);
    while (nbEleves < 1 || nbEleves > 30) {
        printf("Valeur invalide.\n");
        printf("Entrez un nombre d'eleves (entre 1 et 30) : ");
        scanf("%d", &nbEleves);
    }
    return nbEleves;
}

void saisirNotes(int notes[][3], int nb) {
    for (int i = 0; i < nb; i++) {
        printf("Eleve %d :\n", i + 1);
        for (int j = 0; j < 3; j++) {
            int note;
            printf("  Note du controle %d (0 a 20) : ", j + 1);
            scanf("%d", &note);
            while (note < 0 || note > 20) {
                printf("  Valeur invalide.\n");
                printf("  Note du controle %d (0 a 20) : ", j + 1);
                scanf("%d", &note);
            }
            notes[i][j] = note;
        }
    }
}

void afficherNotes(int notes[][3], int nbEleves) {
    printf("Tableau des notes\n");
    printf("Eleve   C1   C2   C3\n");
    for (int i = 0; i < nbEleves; i++) {
        printf("%5d   %2d   %2d   %2d\n",
               i + 1,
               notes[i][0],
               notes[i][1],
               notes[i][2]);
    }
}

float calculerMoyenneEleve(int notes[][3], int indiceEleve) {
    float somme = 0;
    for (int j = 0; j < 3; j++) {
        somme += notes[indiceEleve][j];
    }
    return somme / 3.0;
}

int main() {
    int notes[30][3];
    int nbEleves = 0;
    int choix = 1;
    while (choix != 0) {
        afficherMenu();
        choix = lireChoix();
        if (choix == 1) {
            nbEleves = saisirNombreEleves();
        }
        else if (choix == 2) {
            if (nbEleves == 0) {
                printf("Vous devez d'abord saisir le nombre d'eleves.\n");
            }
            else {
                saisirNotes(notes, nbEleves);
            }
        }
        else if (choix == 3) {
            if (nbEleves == 0) {
                printf("Vous devez d'abord saisir le nombre d'eleves.\n");
            }
            else {
                afficherNotes(notes, nbEleves);
            }
        }
        else if (choix == 4) {
            if (nbEleves == 0) {
                printf("Vous devez d'abord saisir le nombre d'eleves.\n");
            }
            else {
                int indice;
                printf("Entrez l'indice de l'eleve (1 a %d): ", nbEleves);
                scanf("%d", &indice);
                while (indice < 1 || indice > nbEleves) {
                    printf("Indice invalide.\n");
                    printf("Entrez l'indice de l'eleve (1 a %d): ", nbEleves);
                    scanf("%d", &indice);
                }
                float moyenne = calculerMoyenneEleve(notes, indice - 1);
                printf("Moyenne de l'eleve %d : %.2f\n", indice, moyenne);
            }
        }
        else if (choix == 0) {
            printf("Au revoir.\n");
        }
        else {
            printf("Choix invalide.\n");
        }
    }
    return 0;
}