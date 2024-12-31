#include<stdio.h>
main()
{
    /*
   sum= 1 -2+ 3 -4+...................+n
    */
   /*
ai program ta abave korte pari
sum=(1+3+5+....)-(2+4+6+......)
   */
int i,even=0,odd=0,n;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
{
    even=even+i;
}
else
{
    odd=odd+i;
}
}
printf("sum=%d",odd-even);

}