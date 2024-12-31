#include <stdio.h>
int main ()
{
int a,i,even=0,odd=0,positive=0,negative=0;
printf(" Enter 7 integers:\n");
for(i=0;i<7;i++)
{
scanf("%d",&a);
if(a>0)
{
    positive++;
}
else if(a<0)
{
    negative++;
}
 if(a%2==0)
{
    even++;
}
else if(a%2!=0)
{
    odd++;
}
}
printf("Number of even values:%d\n",even);
printf("Number of odd values:%d\n",odd);
printf("Number of positive values:%d\n",positive);
printf("Number of negative values:%d\n",negative);























}