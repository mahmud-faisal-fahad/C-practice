#include <stdio.h>
int main () {
int a, b, i, count = 0, sum_odd = 0, sum_even = 0;
 
    printf(" Enter two number:\n");
    scanf("%d %d ", &a,&b);
    if (a>b)
    {
      for (i = a; i <= b; i++){

   if (i % 2 != 0){      
   sum_odd = sum_odd + i;
            }
        }
         printf("%d\n", sum_odd);
    
 count = 0;
 for (i = a; i <= b; i++){
     if (i % 2 == 0){
    sum_even = sum_even + i;
       }
     }
        printf("%d", sum_even);
    }
}
