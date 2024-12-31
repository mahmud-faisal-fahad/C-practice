#include<stdio.h>
int main()
{
int a,i;
printf("Enter an integer:\n");
scanf("%d",&a);
for(i=1;i<=100;i++)
{
if((i%a)==3)
{
    printf("Result:%d\n",i);
}

}

}