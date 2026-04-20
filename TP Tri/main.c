#include <stdio.h>
#include "tri.h"

int main() {
    int n = 80;
    Medicament tab[80];

    saisir(tab, n);

    triBulles(tab, n);

    printf("\n\n--- Tableau trie par date de peremption ---\n");

    afficher(tab, n);

    return 0;
}