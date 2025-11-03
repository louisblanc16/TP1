#include <stdio.h>

int main() {
    int abc1 = 5; //error: invalid suffix "abc" on integer constant; error: expected identifier or '(' before numeric constant
    printf("%d\n", abc1); //error: invalid suffix "abc" on integer constant
    return 0;
}
