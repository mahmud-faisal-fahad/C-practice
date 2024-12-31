#include <stdio.h>

int main() {
    int a,b, sum = 0;

    printf(" Enter the first integer: \n");
    scanf("%d", &a);
    printf(" Enter the second integer: \n");
    scanf("%d", &b);

    for (int i = a; i <= b; i++) 
    {
        
        if (i % 17 != 0)
        {
            sum += i;
        }
    }

    printf("Sum: %d\n", sum);

    return 0;
}
