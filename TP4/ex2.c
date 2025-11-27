#include <stdio.h>

void afficher_menu() {
    printf("=== BANQUE - DISTRIBUTEUR ===\n");
    printf("1 - Faire un retrait\n");
    printf("2 - Quitter\n");
}

int saisir_montant() {
    int montant;
    printf("Montant a retirer : ");
    scanf("%d", &montant);
    return montant;
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
        else if (choix == 1) {
            int montant = saisir_montant();
        }
        else {
            printf("Choix invalide.\n");
        }
    }
    return 0;
}