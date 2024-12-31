#include<stdio.h>
int main()
{
// write a program that takes two integer and sum & avg

int a,b,sum;
float avg;

printf("enter two number:");
scanf("%d %d",&a,&b);

sum=a+b;

printf("The sum is : %d\n",sum);       
avg= (float)sum/2; // this called type casting

printf("The average value is :%f\n",avg);
return 0;
}