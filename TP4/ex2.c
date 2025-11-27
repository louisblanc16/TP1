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

int montant_valide(int montant) {
    if (montant < 5 || montant > 1000) {
        return 0;
    }
    if (montant % 5 != 0) {
        return 0;
    }
    return 1;
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
            if (montant_valide(montant) == 0) {
                printf("Erreur : montant invalide.\n");
                printf("Le montant doit etre entre 5 euros et 1000 euros, divisible par 5.\n");
            }
        }
        else {
            printf("Choix invalide.\n");
        }
    }
    return 0;
}