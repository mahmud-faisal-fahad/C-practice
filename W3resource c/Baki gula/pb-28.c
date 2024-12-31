#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,countpositive=0,sum=0;
    float avg;
    printf("Enter five number :");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
    if(num1>0){
       countpositive++;
       sum=sum+num1;
    }
    if(num2>0){
       countpositive++;
       sum=sum+num2;
    }
    if(num3>0){
       countpositive++;
       sum=sum+num3;
    }
    if(num4>0){
       countpositive++;
       sum=sum+num4;
    }
    if(num5>0){
       countpositive++;
       sum=sum+num5;
    }
    avg=(float)sum/countpositive;
    printf("Number of positive numbers = %d\n",countpositive);
    printf("Average value of the said positive numbers = %.2f\n",avg);
    return 0;
}