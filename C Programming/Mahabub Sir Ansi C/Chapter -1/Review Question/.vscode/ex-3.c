#include<stdio.h>
#include<math.h>
int main()
{
float c,p,n,r,px;
printf("Enter P:");
scanf("%f",&p);

printf("Enter n:");
scanf("%f",&n);

printf("Enter r:");
scanf("%f",&r);
px=pow(r,n);

c=p*(1+px);
printf("Result is: %f",&c);
}