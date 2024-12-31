#include <stdio.h>
int main() {
    float numbers[5]; 
    int j, pctr=0, nctr=0; 
    printf("Enter the first number:\n "); 
    scanf("%f", &numbers[0]);
    printf("Enter the second number:\n "); 
    scanf("%f", &numbers[1]);
    printf("Enter the third number: \n"); 
    scanf("%f", &numbers[2]);
    printf("Enter the fourth number:\n "); 
    scanf("%f", &numbers[3]);
    printf("Enter the fifth number:\n "); 
    scanf("%f", &numbers[4]);

    for(j = 0; j < 5; j++) {
        if(numbers[j] > 0) 
        {
            pctr++; 
        }
        else if(numbers[j] < 0)
        {
            nctr++; 
        }
    }
    printf("\nNumber of positive numbers: %d", pctr);
    printf("\nNumber of negative numbers: %d", nctr);
    printf("\n");

    return 0;
}

