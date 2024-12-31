#include<stdio.h>
#include<math.h>

int main()
{
float a,b,c,x1,x2,d;
printf("Enter a:");
scanf("%f",&a);

printf("Enter b:");
scanf("%f",&b);

printf("Enter c:");
scanf("%f",&c);
d=sqrt(b*b-4*a*c);
x1=(-b+d)/(2*a);
x2=(-b-d)/(2*a);
printf("Result 1st one : %f",x1);
printf("Result 2nd one :%f",x2);
}