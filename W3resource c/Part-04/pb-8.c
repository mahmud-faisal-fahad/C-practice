#include<stdio.h>
int main()
{
int a,b;
float division_result;
printf("enter two number\n");
printf("x=\n");
scanf("%d",&a);
printf("y=\n");
scanf("%d",&b);
if(b!=0)
{
division_result=a/b;
printf("%f",division_result);

}
else
printf("Division not possible");
}
