#include<stdio.h>
main()
{
int num,count=0;
printf("enter any integer:");
scanf("%d",&num);
while(num!=0)
{
num=num/10;
++count;

}
printf("Count number:%d\n",count);



}