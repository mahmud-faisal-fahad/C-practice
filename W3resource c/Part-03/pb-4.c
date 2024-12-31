#include <stdio.h>
int main() {
    int  x, y;

  
    printf("\nInput the first number: "); 
    scanf("%d", &x);
    
    printf("\nInput the second number: ");
    scanf("%d", &y);

    
    if((y % x)== 0 || (x%y==0)) 
    {
        printf("Multiplied!\n"); 
    } 
    else 
    {
        printf("\nNot Multiplied!\n");
    }
    
    return 0;
}
