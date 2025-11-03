#include <stdio.h>
 
int main() {
    int distance_km = 100;
    int vitesse_kmh = 50;
    float temps = distance_km / vitesse_kmh; //Il faut un float pour avoir des valeurs décimales
    float minutes = temps * 60; //Idem
    printf("minutes = %f\n", minutes); //Il faut utiliser %f pour afficher un float
    return 0;
}