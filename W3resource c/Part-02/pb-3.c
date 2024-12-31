#include <stdio.h>
int main()
{
    int a,b,c; 
    printf("\nInput the first integer: "); 
    scanf("%d", &a);
    printf("\nInput the second integer: ");
    scanf("%d", &b);
    printf("\nInput the third integer: ");
    scanf("%d", &c);
if(a>b && a>c){
printf("The maximum value:%d",a);}
else if(b>a && b>c){
printf("The maximum value:%d",b);}
else if(c>a && c>b)
{
    printf("The maximum value :%d",c);
}
else{
printf("All Are Equal");}
    return 0;
}
