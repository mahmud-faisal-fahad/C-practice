#include<stdio.h>
int main()
{
int count=0,sum=0,n;
float avg=0;
printf("Input each number on a separate line (888 to exit):\n");

scanf("%d", &n);
while (n!=888)
{
   sum+=n;
   count++;
   scanf("%d",n);
}
if(count)
avg=(float)sum/count;
printf("The average value is:%f",avg);








}