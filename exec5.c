#include <stdio.h>

int main() {
    char s[5];
    s[0] = 'H';
    s[1] = 'e';
    s[2] = 'y';
    s[3] = '!';
    s[4] = '\0'; //Il manquait le caractère nul de fin de chaîne
    printf("%s\n", s); 
    return 0;
}
