#include <stdio.h>

int main() {
    char s[5] = "Hello"; //warning: initializer-string for array of chars is too long -> la taille du tableau doit être au moins égale à la taille de la chaîne de caractères + 1 pour le caractère nul
    printf("%s\n", s);
    return 0;
}
