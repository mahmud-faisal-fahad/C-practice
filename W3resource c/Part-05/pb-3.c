#include<stdio.h>
int main ()
{
int a,i;
printf("Enter an integer:");
scanf("%d",&a);

printf("All the divisors of%d are:\n",a);
for(i=1;i<=a;i++)
{
    if((a%i)==0)
    {
        printf("%d\n",i);
    }
}



}