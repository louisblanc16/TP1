#include "TP4_TU.h"

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
    int resultat = 1;
    for (int i = 1; i <= n; i++) { //puisqu'on commence à n=1, on doit inclure la valeur de n donc <= et non <
        resultat *= i;
    }
    return resultat;
}

int contientMajuscule(const char* chaine) {
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
