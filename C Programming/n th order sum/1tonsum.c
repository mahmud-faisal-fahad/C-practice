#include<stdio.h>
main()
{
    /*
    1 +2+ 3 +4...................+n
    */
int i,sum=0,n;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("sum=%d",sum);

}