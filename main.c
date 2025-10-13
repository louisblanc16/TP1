#include <stdio.h>
#include <math.h>
#include <string.h>

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    const char *pendu[] = {
        "\n\n\n\n\n\n\n-------\n",
        "\n |\n |\n |\n |\n |\n |\n-------\n",
        " -------\n | |\n |\n |\n |\n |\n-------\n",
        " -------\n | |\n | O\n |\n |\n |\n-------\n",
        " -------\n | |\n | O\n | |\n |\n |\n-------\n",
        " -------\n | |\n | O\n | /|\\\n |\n |\n-------\n",
        " -------\n | |\n | O\n | /|\\\n | / \\\n |\n-------\n"
    };

    char motSecret[50], motAffiche[50], lettre;
    int erreurs = 0, i, trouve;

    printf("Entre le mot secret (sans espaces) : ");
    scanf("%s", motSecret);

    int longueur = strlen(motSecret);
    for (i = 0; i < longueur; i++) motAffiche[i] = '_';
    motAffiche[longueur] = '\0';

    while (erreurs < 6 && strcmp(motSecret, motAffiche) != 0) {
        printf("\nMot : %s\n", motAffiche);
        printf("Lettre : ");
        scanf(" %c", &lettre);
        lettre = tolower(lettre);

        trouve = 0;
        for (i = 0; i < longueur; i++) {
            if (tolower(motSecret[i]) == lettre && motAffiche[i] == '_') {
                motAffiche[i] = motSecret[i];
                trouve = 1;
            }
        }

        if (!trouve) {
            erreurs++;
            printf("%s\n", pendu[erreurs]);
        }

        printf("\n");
    }

    if (strcmp(motSecret, motAffiche) == 0)
        printf("Bravo ! t'as trouvé le mot : %s\n", motSecret);
    else
        printf("Perdu ! le mot était : %s\n", motSecret);

    return 0;
}
