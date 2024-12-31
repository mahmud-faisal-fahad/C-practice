#include <stdio.h>

int main(){
    int a = 1, b;
    printf("a: %d\n", a);

    int *pA = &a;
    pA = 123;
    printf("changed by pointer pA: %d\n", pA);


    return 0;
}