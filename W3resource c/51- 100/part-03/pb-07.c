#include<stdio.h>
int main()
{
    float r;
    int p,days,amount;
printf("Enter principle");
scanf("%d",&p);
printf("Enter rate of interest");
scanf("%f",&r);
printf("Enter time");
scanf("%d",&days);
amount=(p*r*(days/365));
printf(" interest amount is =$%d",amount);








}
