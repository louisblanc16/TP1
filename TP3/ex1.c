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
        int ligne = n+ (n-1);
        int centre_gauche = mid-n/2;
        int centre_droite = mid+n/2;
        for (int i=0; i<n && ligne<max_height; i++) {
            int epaisseur = 2 *(n-i);
            int gauche_debut = centre_gauche-(i+n*1.5);
            int gauche_fin = gauche_debut+epaisseur-1;
            int droite_fin = centre_droite+(i+n*1.5);
            int droite_debut = droite_fin-epaisseur+1;

            if (gauche_debut < 0) {
                gauche_debut = 0;
            }

            if (gauche_fin>= width) {
                gauche_fin = width-1;
            }

            if (droite_debut < 0) {
                droite_debut = 0;
            }
            if (droite_fin >= width) {
                droite_fin = width-1;
            }

            img[ligne][gauche_debut] = '.';
            for (int x=gauche_debut+1; x<gauche_fin; x++) {
                img[ligne][x] = 'S';
            }

            img[ligne][gauche_fin] ='"';
            img[ligne][droite_debut] = '"';

            for (int x=droite_debut+ 1; x <droite_fin; x++) {
                img[ligne][x]='S';
            }
            img[ligne][droite_fin]= '.';
            ligne++;
        }
        for (int i=0; i<max_height; i++) {
            for (int j= 0; j < width; j++) {
                printf("%c", img[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}