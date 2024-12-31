#include <stdio.h>

int main() 
{
    float weight1, item1, weight2, item2, result;
    

    printf("Weight - Item1: ");
    scanf("%f", &weight1);
    

    printf("No. of item1: ");
    scanf("%f", &item1);
    
    printf("Weight - Item2: ");
    scanf("%f", &weight2);
    
   
    printf("No. of item2: ");
    scanf("%f", &item2);
    

    result = ((weight1 * item1) + (weight2 * item2)) / (item1 + item2);

    printf("Average Value = %f\n", result);

    return 0;
}