#include<stdio.h>
int main()
{
int a,i;
printf("Enter an integer:\n");
scanf("%d",&a);
printf("List of Square of each one of the even values from 1 to %d\n",a);

for(i=2;i<=a;i++)
{
    if((i%2)==0)
    {
        printf("%d^2=%d\n",i,i*i);

    }
}

}