#include<stdio.h>
int main()
{
int pass,x=10;
while(x!=0)
{
printf("enter the password(number only)");
scanf("%d",&pass);
if(pass==1234)
{
    printf("Correct password");
    x=0;
}
else
{
    printf("Wrong Password , try another");

}

}
return 0;

}