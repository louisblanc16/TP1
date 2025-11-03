#include <stdio.h>

int main() {
    char nom[10]; //4 ne stockait pas assez de place pour le nom et le caractère nul
    printf("Nom ? ");
    scanf("%s", &nom); // Il manquait le &
    printf("Bonjour %s\n", nom);
    return 0;
}
