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
                }
                else {
                    img[i][j] = 'S';
                }
            }
            if (i == n - 1) {
                for (int j = 0; j <= mid - n; j++) {
                    img[n - 1][j] = '_';
                }
                for (int j = mid + n; j < width; j++) {
                    img[n - 1][j] = '_';
                }
            }
        }
        for (int j = 0; j < width; j++) {
            if (j == 0 || j == width - 1) {
                img[n][j] = '.';
            }
            else {
                img[n][j] = 'S';
            }
        }
        for (int i = n + 1; i < n + (n - 1); i++) {
            int k = i - n; 
            for (int j = 0; j < width; j++) {
                if (j == k || j == width - 1 - k) {
                    img[i][j] = '.';       
                }
                else if (j > k && j < width - 1 - k) {
                    img[i][j] = 'S';       
                }
                else {
                    img[i][j] = ' ';    
                }
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