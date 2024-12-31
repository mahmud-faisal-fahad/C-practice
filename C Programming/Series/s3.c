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
printf("1+3+5+...........%d:\n",n);

while(a<=n)
{
    sum=sum+a;
    a=a+2;
}
printf("Total  sum:%d",sum);

}

    
}
