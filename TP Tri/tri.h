#ifndef TRI_H
#define TRI_H

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    char nom[50];
    int code;
    Date fabrication;
    Date peremption;
    float prix;
    int vendus;
    int stock;
} Medicament;

void saisir(Medicament tab[], int n);
void triBulles(Medicament tab[], int n);
void afficher(Medicament tab[], int n);

#endif