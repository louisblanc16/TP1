#include <stdio.h>
#include "tp5.h"

void afficherMenu() {
    printf("=====================================\n");
    printf("        Suivi de consommation\n");
    printf("=====================================\n");
    printf("1. Ajouter une consommation\n");
    printf("2. Afficher le resume du jour\n");
    printf("3. Sauvegarder et quitter\n");
    printf("Votre choix : ");
}

int lireChoix() {
    int c;
    scanf("%d", &c);
    return c;
}