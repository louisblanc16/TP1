#include <stdio.h>

void afficher_menu() {
    printf("=== BANQUE - DISTRIBUTEUR ===\n");
    printf("1 - Faire un retrait\n");
    printf("2 - Quitter\n");
}

int main() {
    int choix = 0;
    while (choix != 2) {
        afficher_menu();
        printf("Votre choix : ");
        scanf("%d", &choix);
        if (choix == 2) {
            printf("Au revoir.\n");
        }
        else {
            printf("Choix invalide.\n");
        }
    }
    return 0;
}