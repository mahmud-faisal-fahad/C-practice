#include <stdio.h>
#include <math.h>

int main () {
    int x, multiply = 0, i;


    printf("Enter a number: ");
    scanf("%d", &x);


    if (x >= 5 && x <= 100)
    {
    
        printf("Square of each even between 1 and %d:\n",x);
        for (i = 1; i <= x; i++){

            if (i % 2 == 0){
              multiply=i*i;
                printf("%d^2 = %d\n", i,multiply);
            }
        }
        printf("\nSquare of each odd between 1 and %d:\n",x);
          for (i = 1; i <= x; i++){
     if (i % 2 != 0){
multiply=i*i;
                printf("%d^2 = %d\n", i,multiply);
            }
        }
    }
}
