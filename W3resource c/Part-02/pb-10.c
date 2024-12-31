#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, D;
    printf("\nInput the first number(a): "); 
    scanf("%lf", &a);
    printf("\nInput the second number(b): "); 
    scanf("%lf", &b);
    printf("\nInput the third number(c): "); 
    scanf("%lf", &c);

   D = (b*b) - (4*(a)*(c)); 

    if(D > 0 && a != 0) { 
        double x, y;
        D = sqrt(D); 
        x = (-b + D)/(2*a); 
        y = (-b - D)/(2*a); 
        printf("Root1 = %.5lf\n", x); 
        printf("Root2 = %.5lf\n", y); 
    } 
    else {
        printf("Impossible to find the roots.\n"); \
    }
    
    return 0;
}
