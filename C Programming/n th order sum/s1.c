#include<stdio.h>
main()
{
    /*
    1.5+ 2.5 +3.5 +4.5+...................+n
    */
float i,sum=0,n;
printf("Enter n:");
scanf("%f",&n);
for(i=1.5;i<=n;i++)//i++mane i=i+1
{

sum=sum+i;
}

printf("Sum =%f",sum);


}