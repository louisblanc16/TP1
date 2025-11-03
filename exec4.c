#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10) {
        printf("%d\n", i++); //On incrémente i pour que sa valeur change à chaque tour de boucle et pouvoir sortir du while
    }
    return 0;
}
