#include <stdio.h>
#include <locale.h>
#include <windows.h>
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

void afficheResume(int tab[7]) {
    int hB = humeurBonbons(tab[2]);
    int hL = humeurLegumes(tab[4]);
    int hF = humeurFruits(tab[5]);
    char emoB[4][10] = {"😇", "🙂", "😕", "👿"};
    char emoL[3][10] = {"😭", "🙂", "😎"};
    char emoF[3][10] = {"😅", "🙂", "😀"};
    printf("========== Resume du jour ==========\n");
    printf("Eau       : %d 💧 ", tab[0]);
    afficherBarre(tab[0], 20);
    printf("\n");
    printf("Cafe      : %d ☕ ", tab[1]);
    afficherBarre(tab[1], 20);
    printf("\n");
    printf("Bonbons   : %d 🍬 %s ", tab[2], emoB[hB]);
    afficherBarre(tab[2], 20);
    printf("\n");
    printf("Gateau    : %d 🍰 ", tab[3]);
    afficherBarre(tab[3], 20);
    printf("\n");
    printf("Legumes   : %d 🥦 %s ", tab[4], emoL[hL]);
    afficherBarre(tab[4], 20);
    printf("\n");
    printf("Fruits    : %d 🍎 %s ", tab[5], emoF[hF]);
    afficherBarre(tab[5], 20);
    printf("\n");
    printf("Proteines : %d 🍗 ", tab[6]);
    afficherBarre(tab[6], 20);
    printf("\n");
    printf("====================================\n");
    }

int humeurBonbons(int nb) {
    if (nb >= 0 && nb <= 3) return 0;
    else if (nb >= 4 && nb <= 7) return 1;
    else if (nb >= 8 && nb <= 12) return 2;
    else return 3;
}

int humeurLegumes(int nb) {
    if (nb >= 0 && nb <= 2) return 0;
    else if (nb >= 3 && nb <= 5) return 1;
    else return 2;
}

int humeurFruits(int nb) {
    if (nb >= 0 && nb <= 1) return 0;
    else if (nb == 2) return 1;
    else return 2;
}

void afficherBarre(int valeur, int max) {
    if (max <= 0) max=1;
    if (valeur < 0) valeur=0;
    if (valeur > max) valeur=max;
    int casesPleines = (valeur*10) / max;
    for (int i=0; i<10; i++) {
        if (i<casesPleines)
            printf("█");
        else
            printf("░");
    }
}

int charger(int tab[7]) {
    FILE *f =fopen("consommation.txt", "r");
    if (f==NULL) {
        return 0;
    }
    for (int i=0; i<7; i++) {
        if (fscanf(f, "%d", &tab[i]) !=1) {
            fclose(f);
            return 0;
        }
    }
    fclose(f);
    return 1;
}

int sauvegarder(int tab[7]) {
    FILE *f =fopen("consommation.txt", "w");
    if (f==NULL) {
        return 0;
    }
    for (int i = 0; i<7;i++) {
        fprintf(f, "%d ", tab[i]);
    }
    fprintf(f,"\n");
    fclose(f);
    return 1;
}

void utf8()
{
    SetConsoleOutputCP(CP_UTF8);  
    SetConsoleCP(CP_UTF8);        
    setlocale(LC_ALL, ".UTF-8");
}