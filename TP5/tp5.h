#ifndef TP5_H
#define TP5_H

void utf8();
void afficherMenu();
int lireChoix();
void initialiser(int tab[7]);
void ajouterConsommation(int tab[7]);
void afficheResume(int tab[7]);
int charger(int tab[7]);
int sauvegarder(int tab[7]);
int humeurBonbons(int nb);
int humeurLegumes(int nb);
int humeurFruits(int nb);
void afficherBarre(int valeur, int max);

#endif