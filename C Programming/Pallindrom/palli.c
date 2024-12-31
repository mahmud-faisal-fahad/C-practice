#include<stdio.h>
int main()
/*
pallindrom holo original number and reverse number soman hbe
original number = reverse number
*/
{
int number,sum=0,remainder,temp;
printf("Enter any  number:");
scanf("%d",&number);
temp=number;
while (temp!=0)
{
remainder=temp%10;
sum=sum*10+remainder;
temp=temp/10;
// sum= reverse number
}
if(number==sum)
{
    printf("Pallindrom number");
}
else{
printf("Not a pallindrom");}
getchar();


}