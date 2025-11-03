#include <stdio.h>

int main() {
    int x = 42; //warning: initialization makes integer from pointer without a cast [-Wint-conversion] -> il faut utiliser un entier int et non une chaîne de caractère
    printf("%d\n", x);
    return 0;
}
