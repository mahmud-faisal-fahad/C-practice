#include <stdio.h>

int main ()
{
int a,b,c;
printf("Enter three sides of triangle:\n");
scanf("%d %d %d",&a,&b,&c);
if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (c*c)+(b*b)==(a*a))

{
    printf(" It is a right triangle \n");
}
else
{
 printf("It is not  a right triangle");
}



}













