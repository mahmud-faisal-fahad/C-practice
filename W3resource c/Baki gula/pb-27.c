#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,countpositive=0,countnegative=0;
    printf("Enter five number :");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
    if(num1>0)
       countpositive++;
    else
        countnegative++;
    if(num2>0)
       countpositive++;
    else
        countnegative++;
    if(num3>0)
       countpositive++;
    else
        countnegative++;
    if(num4>0)
       countpositive++;
    else
        countnegative++;
    if(num5>0)
       countpositive++;
    else
        countnegative++;
    printf("Number of positive numbers = %d\n",countpositive);
    printf("Number of negative numbers = %d\n",countnegative);
    return 0;
}
