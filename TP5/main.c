#include <stdio.h>
#include "tp5.h"
#include <locale.h>

int main() {
    setlocale(LC_ALL, "utf");
    int conso[7] = {0};
    initialiser(conso);
    int choix = 0;
    while (choix != 3) {
        afficherMenu();
        choix = lireChoix();
        if (choix == 1) {
            printf("Ajout d une consommation : \n");
            ajouterConsommation(conso);
        }
        else if (choix == 2) {
            printf("Resume du jour : \n");
        }
        else if (choix == 3) {
            printf("Au revoir !\n");
        }
        else {
            printf("Choix invalide\n");
        }
    }
    return 0;
}