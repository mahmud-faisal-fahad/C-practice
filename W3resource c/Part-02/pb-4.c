#include <stdio.h>
int main() 
{
    int a; 
    float b;
    printf("Total distance in km: ");
    scanf("%d",&a);
    
    printf(" Total fuel spent in liters: ");
    scanf("%f", &b);

    printf("Average consumption (km/lt) %.3f ",a/b);
    return 0;
}