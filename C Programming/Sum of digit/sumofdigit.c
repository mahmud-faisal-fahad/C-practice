#include<stdio.h>
int main()
{
int num,r,temp,sum=0;
printf("Enter any number:");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
    r=temp%10;
    sum=sum+r;
    temp=temp/10;
}
printf("Sum of digit:%d",sum);










}