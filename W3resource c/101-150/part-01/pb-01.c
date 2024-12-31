#include <stdio.h>
int main() {
    int x; 
    printf("Enter an integer: "); 
    scanf("%d", &x);

    if(x >=0 && x <= 20){
        printf("Range [0, 20]\n"); 
    } 
    else if(x >=21 && x <= 40) 
    {
        printf("Range [21,40]\n");
    } 
    else if(x >=41 && x <= 60) 
    {
        printf("Range [41,60]\n"); }
    else if(x >61 && x <= 80)
    {
        printf("Range [61,80]\n"); 
    } 
    else if(x >81 && x <= 90)
    {
        printf("Range [81,90]\n"); 
    } 
    else if(x >91 && x <= 100)
    {
        printf("Range [91,100]\n"); 
    } 
    else 
    {
        printf("Outside the range\n"); 
    }   

    return 0;
}

