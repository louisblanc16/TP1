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

int saisirNombreEleves () {
    int nbEleves;
    printf("Entrez un nombre d'eleves (entre 1 et 30) : ");
    scanf("%d", &nbEleves);
    if (nbEleves < 1 || nbEleves > 30) {
        while (nbEleves < 1 || nbEleves > 30) {
            printf("Valeur invalide.\n");
            printf("Entrez un nombre d'eleves (entre 1 et 30) : ");
            scanf("%d", &nbEleves);
        }
    }
    return nbEleves;
}

int main() {
    afficherMenu();
    int choix = lireChoix();
    int nbEleves = saisirNombreEleves();
    return 0;
}