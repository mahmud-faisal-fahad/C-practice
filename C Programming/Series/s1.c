#include<stdio.h>
main()
/*
1+2+3+..........+N
*/
{
int n,i,sum=0;
printf("Enter the last number this series:\n");
scanf("%d",&n);
printf("1+2+3+...........%d:\n",n);

for(i=1;i<=n;i=i+1)
{
    sum=sum+i;
}
printf("Total  sum:%d",sum);



}