#include<stdio.h>
main()
{
int num,rem,sum=0,temp,fact,i;
printf("Enter any number:");
scanf("%d",&num);
temp=num;
while(temp!=0)          
{
rem=temp%10;
fact=1;
for(i=1;i<=rem;i++)
{
    fact=fact*i;
}
sum=sum+rem;
temp=temp/10;

}
if(sum==num)
{
    printf("%d is s strong number",num);
}
else
printf("Not a strong numnbeer");








}