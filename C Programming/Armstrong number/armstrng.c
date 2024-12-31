#include<stdio.h>
int main()
/*
armstrong number hoolo amon akta songkha nite hbe jei songkha ke alada kore cube kore then jog 
korte hbe and jog fol sei ager songkha e hbe

ex=153
=1*1*1+5*5*5+3*3*3=153
*/
{
int number,sum=0,remainder,temp;
printf("Enter any  number:");
scanf("%d",&number);
temp=number;
while (temp!=0)
{
remainder=temp%10;
sum=sum+remainder*remainder*remainder;
temp=temp/10;

}
if(sum==number)
{
    printf("Amrstrong number");
}
else
{
    printf("Not a armstrong number");
}
getchar();


}