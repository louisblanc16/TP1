#include <stdio.h>
#include "tp5.h"
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int conso[7];
    if (!charger(conso)) {
        printf("Aucune sauvegarde trouvee\n");
        initialiser(conso);
    }
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
            afficheResume(conso);
        }
        else if (choix == 3) {
            if (sauvegarder(conso)) {
                printf("Donnees sauvegardees.\n");
            }
            else {
            printf("Erreur de sauvegarde !\n");
            }
        }
        else {
            printf("Choix invalide\n");
        }
    }
    return 0;
}