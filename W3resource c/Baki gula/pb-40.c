#include <stdio.h>

int main() {
    int a,b;

    printf("Enter the first integer: \n");
    scanf("%d", &a);

    printf(" Enter  the second integer: \n");
    scanf("%d", &b);

    for(int i=a; i<b; i++) {
        int rem = i % 7;
        if(rem == 2 || rem == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}
