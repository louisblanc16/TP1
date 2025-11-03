#include <stdio.h>

int main () { //error: expected '=', ',', ';', 'asm' or '__attribute__' before '{' token -> il manque les parenthèses de la fonction main
    printf("Test\n");
    return 0;
}
