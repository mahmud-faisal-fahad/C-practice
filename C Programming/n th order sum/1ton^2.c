#include<stdio.h>
main()
{
    /*
  1^2+2^2+3^2+...................+n
    */
float i,sum=0,n;
printf("Enter n:");
scanf("%f",&n);
for(i=1;i<=n;i++)//i++mane i=i+1
{
sum=sum+i*i;//sum=1+4+9
}

printf("Sum =%f",sum);

}
