#include<stdio.h>
int main()
{
/*
Develop an algorithm to divide find the sum of the first N natural numbers where N would be input by the user

*/
int n,sum,i;
printf("Enter N:");
scanf("%d",&n);

sum=0;
i=1;
while (i<=n)
{
sum=sum+i;
i=i+1;

}
printf("Result is : %d",sum);
}