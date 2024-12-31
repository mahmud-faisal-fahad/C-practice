#include <stdio.h>
int main () {
    int b;
    printf("Enter a number:\n");
    scanf("%d", &b);
    if ((b % 2 == 0) && b > 0){
        printf("Number is positive-even\n");
    }
    else{
        if ((b % 2 == 0) && b < 0){
   printf("Number is negative-even'\n");
}
        else {
 if ((b % 2 !=0) && b > 0){
  printf("Number is positive-odd\n");
     }
 else {
       if ((b % 2 != 0) && b < 0){
    printf("Number is negative-odd\n");
   }
     else{
 printf("Zero\n");    
}
   }
 }
 }
}
