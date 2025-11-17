#include <stdio.h>

int main () {
    int n;
    int width, max_height;
    char img[15][15];
    printf("Entrez une taille n entre 5 et 10 : ");
    scanf("%d", &n);
    if (n>=5 && n<=10) {
        width = n * n;
        max_height = 3 * n - 1;
    }
}