#include "TP4_TU.h"
#include <stdlib.h>

int estPair(int n) {
    return n % 2 == 0; //Modification : n%2 == 1 est faux, on vérifie que le reste n%2 == 0;
}

int max2(int a, int b) {
    if (a > b) {
        return a;
    }
    return b; //ici on retourne b et non a
}

int factorielle(int n) {
    int resultat = n;
    for (int i = n; i <= -1; i++) { //on adapte la fonction pour les nombres négatifs en les multipliant jusqu'à -1
        resultat *= i;
    }
    return resultat;
}

int contientMajuscule(const char* chaine) {
    if (chaine == NULL)
        return 0;
    int i = 0;
    while (chaine[i] != '\0') {
        if (chaine[i] >= 'A' && chaine[i] <= 'Z') {
            return 1;
        }
        i++;
    }
    return 0;
}

int divisionExacte(int a, int b) {
    return a % b == 0;
}

int sommeTableau(const int tab[], int taille) {
    int somme = 0;
    for (int i = 0; i <= taille; i++) {
        somme += tab[i];
    }
    return somme;
}
