#include<stdio.h>
int main()
{
// array declaration 
int numbers[5],sum=0;

// array initialization
for(int index=0; index<5; index++)
{
    printf("number %d = \n",index);
    scanf("%d",&numbers[index]);
}
for(int index=0; index<5; index++)
{
sum=sum+numbers[index];
   
}

    printf(" the sum is %d \n",sum);
}