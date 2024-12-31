#include <stdio.h>
int main () {


 int x, y, multi;


    printf(" Enter two integers: \n");


    scanf("%d %d", &x, &y);


    if (x > y){


        multi = x % y;


        if ( multi == 0){
            printf("Multiplies\n");
        }
        else{
            printf("Not Multiplies\n");
        }
    }
    else{
     
        multi = y % x;

      
        if (multi == 0){
            printf("Multiplies\n");
        }
        else{
            printf("Not Multiplies\n"); 
        }
    }
}
