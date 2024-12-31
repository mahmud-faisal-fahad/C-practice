#include<stdio.h>
main()
{

/*
somantor dhara 
1+2+3+..........+N
*/
{
int n,sum=0,a=1;
printf("Enter the last number this series:\n");
scanf("%d",&n);
printf("1+2+3+...........%d:\n",n);

while(a<=n)
{
    sum=sum+a;
    a=a+1;
}
printf("Total  sum:%d",sum);

}

    
}