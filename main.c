#include <stdio.h>
#include <math.h>

int main() {
    float C, t, M;  
    int n;

    printf("Montant du pret (C) : ");
    scanf("%f", &C);
    printf("Taux d'interet annuel (en pourcentage) : ");
    scanf("%f", &t);
    printf("Duree du pret (en annees) : ");
    scanf("%d", &n);

    M = (C * (t / 12)) / (1 - pow(1 + (t / 12), -n * 12));

    printf("La mensualite du pret est : %.2f euros\n", M);

    return 0;
}
