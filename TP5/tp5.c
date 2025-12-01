#include <stdio.h>
#include <locale.h>
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

void initialiser(int tab[7]) {
    for (int i=0;i<7; i++) {
        tab[i]=0;
    }
}

void ajouterConsommation(int tab[7]) {
    int choix=0;
    int quantite=0;
    printf("Quelle categorie voulez vous modifier\n");
    printf("1. Eau 💧\n");
    printf("2. Cafe ☕\n");
    printf("3. Bonbons 🍬\n");
    printf("4. Gateau 🍰\n");
    printf("5. Legumes 🥦\n");
    printf("6. Fruits 🍎\n");
    printf("7. Proteines 🍗\n");
    printf("Votre choix : ");
    scanf("%d", &choix);
    if (choix<1 || choix>7) {
        printf("Choix invalide.\n");
        return;
    }
    printf("Combien d unites ajouter ? ");
    scanf("%d", &quantite);
    tab[choix-1] += quantite;
    printf("Consommation mise a jour.\n");
}