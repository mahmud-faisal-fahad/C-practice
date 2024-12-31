#include<stdio.h>
main()
{
    /*
    1.5+ 2.5 +3.5 +4.5+...................+n
    */
double i,sum=0,n;
printf("Enter n:");
scanf("%lf",&n);
for(i=1;i<=n;i++)//i++mane i=i+1
{

sum=sum+(1/i);
}

printf("Sum =%f",sum);


}