#include<stdio.h>
main()
{

/*
gonottor dhara
1*2*3+2*4*5+3*6*7++++++++++n1*n2
*/
int n1,n2,n3,sum=0,a=1,b=2,c=3;
printf("Enter n1 , n2 &n3:");
scanf("%d %d %d",&n1,&n2,&n3);
while (a<=n1 && b<=n2 && c<=n3 )
{
sum=sum+a*b;
a=a+1;
b=b+2;
c=c+2;
}
printf("Sum=%d",sum);


}