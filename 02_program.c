#include <stdio.h>

int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    int c = a + b;
    printf("Addition: %d\n", c);
    
    return 0;
}