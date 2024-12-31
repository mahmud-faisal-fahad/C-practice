#include<stdio.h>
int main()
{
int i,numbers[5],total=0;
printf("Enter first number:\n");
scanf("%d",&numbers[0]);
printf("Enter second number:\n");
scanf("%d",&numbers[1]);
printf("Enter third number:\n");
scanf("%d",&numbers[2]);
printf("Enter fourth number:\n");
scanf("%d",&numbers[3]);
printf("Enter fifth number:\n");
scanf("%d",&numbers[4]);
for(i=0;i<5;i++)
{
    if((numbers[i]%2)!=0)
    {
        total+=numbers[i];
    }
}
printf("Sum of all odd values :%d",total);

}