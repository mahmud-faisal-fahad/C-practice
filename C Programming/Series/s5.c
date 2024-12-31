#include<stdio.h>
main()
{

/*
gonottor dhara
1*2+2*4+3*6++++++++++n1*n2
*/
int n1,n2,sum=0,a=1,b=2;
printf("Enter n1 & n2:");
scanf("%d %d",&n1,&n2);
while (a<=n1 && b<=n2)
{
sum=sum+a*b;
a=a+1;
b=b+2;
}
printf("Sum=%d",sum);


}