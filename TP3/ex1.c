#include <stdio.h>

int main() {
    int n;
    int width, max_height, mid;
    char img[100][100];
    printf("Entrez une taille n entre 5 et 10 : ");
    scanf("%d", &n);
    if (n >= 5 && n <= 10) {
        width = n * n;
        max_height = 3 * n - 1;
        mid = width / 2;
        for (int i = 0; i < max_height; i++) {
            for (int j = 0; j < width; j++) {
                img[i][j] = ' ';
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = mid - i; j <= mid + i; j++) {
                if (j == mid - i || j == mid + i) {
                    img[i][j] = 'A';
                } else {
                    img[i][j] = 'S';
                }
            }
            if (i == n - 1) {
                img[i][mid - i - 1] = '_';
                img[i][mid + i + 1] = '_';
            }
        }
        for (int i = 0; i < max_height; i++) {
            for (int j = 0; j < width; j++) {
                printf("%c", img[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}