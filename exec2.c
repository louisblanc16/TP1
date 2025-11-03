#include <stdio.h>

int main() {
    int tab[10]; //On redéfinit la taille du tableau à 10 pour être dans les limites
    
    for (int i = 0; i < 10; i++) {
        tab[i] = i;  
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n",tab[i]);  
    }
    printf("fait\n");
    return 0;
}
