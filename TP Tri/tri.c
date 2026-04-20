#include <stdio.h>
#include "tri.h"

int datePlusGrande(Date d1, Date d2) {
    if (d1.annee > d2.annee) return 1;
    if (d1.annee < d2.annee) return 0;

    if (d1.mois > d2.mois) return 1;
    if (d1.mois < d2.mois) return 0;

    if (d1.jour > d2.jour) return 1;

    return 0;
}

void saisir(Medicament tab[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("\n--- Medicament %d ---\n", i + 1);

        printf("Nom : ");
        scanf("%s", tab[i].nom);

        printf("Code : ");
        scanf("%d", &tab[i].code);

        printf("Date fabrication (j m a) : ");
        scanf("%d %d %d",
              &tab[i].fabrication.jour,
              &tab[i].fabrication.mois,
              &tab[i].fabrication.annee);

        printf("Date peremption (j m a) : ");
        scanf("%d %d %d",
              &tab[i].peremption.jour,
              &tab[i].peremption.mois,
              &tab[i].peremption.annee);

        printf("Prix : ");
        scanf("%f", &tab[i].prix);

        printf("Vendus : ");
        scanf("%d", &tab[i].vendus);

        printf("Stock : ");
        scanf("%d", &tab[i].stock);
    }
}

void triBulles(Medicament tab[], int n) {
    int i, j;
    Medicament temp;

    for (i= 0; i < n-1; i++) {
        for (j =0; j < n-1; j++) {

            if (datePlusGrande(tab[j].peremption, tab[j+1].peremption)) {

                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}

void afficher(Medicament tab[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("\n%s | Code:%d | Peremption:%d/%d/%d | Prix:%f",
               tab[i].nom,
               tab[i].code,
               tab[i].peremption.jour,
               tab[i].peremption.mois,
               tab[i].peremption.annee,
               tab[i].prix);
    }
}