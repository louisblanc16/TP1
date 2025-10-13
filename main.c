#include <stdio.h>

int main() {
    int seconds;
    printf("Entrez un nombre de secondes : ");
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remaining_seconds = seconds % 60;
    printf("%d heures, %d minutes et %d secondes\n", hours, minutes, remaining_seconds);

    return 0;
}