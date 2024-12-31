#include<stdio.h>
int main()
{
int a,b,i,sum=0,tmp;
printf("Enter the first number");
scanf("%d",&a);
printf("Enter the second number");
scanf("%d",&b);
if(a>b)
{
tmp=b;
b=a;
a=tmp;
}
for(i=a;i<=b;i++)
{
    if((i%17)!=0)
{
    sum+=i;

}
printf("Sum:%d\n",sum);
}


}