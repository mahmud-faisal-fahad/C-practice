#include <stdio.h>
int main() {
    float  x, y, z, P, A; 

   
    printf("Enter the first number: \n"); 
    scanf("%f", &x);
    printf("Enter the second number:\n ");
    scanf("%f", &y);
    printf("Enter the third number: \n");
    scanf("%f", &z);

    if(x < (y+z) && y < (x+z) && z < (y+x)) 
     {  
        P = x+y+z; 
        printf("\nPerimeter  = %.1f\n", P);  
    }
    else
    {
        printf("Not possible to create a triangle..!"); 
    }
    
    return 0;
}
