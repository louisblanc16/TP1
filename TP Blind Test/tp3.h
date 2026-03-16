#ifndef TP3_H
#define TP3_H
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char fichier[50];
    char titre[50];
    char artiste[30];
} Chanson;

typedef struct {
    char nom[50];
    int meilleur_score;
    ListeJoueurs *suivant;
} ListeJoueurs;

typedef struct {
    char nom[50];
    int score;
} Joueur;

#endif