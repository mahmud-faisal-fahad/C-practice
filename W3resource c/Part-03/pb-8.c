#include<stdio.h>
int main()
{
float numbers[5],total=0,avg;
int i,pctr=0;
printf("Enter first number:\n");
scanf("%f",&numbers[0]);
printf("Enter second number:\n");
scanf("%f",&numbers[1]);
printf("Enter third number:\n");
scanf("%f",&numbers[2]);
printf("Enter fourth number:\n");
scanf("%f",&numbers[3]);
printf("Enter fifth number:\n");
scanf("%f",&numbers[4]);
for(i=0;i<5;i++)
{
    if(numbers[i])
    {
        pctr++;
        total+=numbers[i];
    }

}
avg=total/pctr;
printf("Number of positive number:%d\n",pctr);
printf("Average value of positive numbers:%.2f",avg);
return 0;

}