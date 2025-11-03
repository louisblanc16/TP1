#include <stdio.h>

int main() {
    int a;
    int b = 10; //error: 'b' undeclared (first use in this function) -> la variable b n'a pas été déclarée avec un type
    printf("%d\n", b);
    return 0;
}
