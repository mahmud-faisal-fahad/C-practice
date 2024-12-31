
#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
int num,i,count=0,numofprimenumbers=0;
for(num=1;num<=199;num++){
    count=0;
if(num<=1)
{
    count=1;
}
for(i=2;i<=sqrt(num);i++)


{
if(num%i==0)
{
count++;
break;
}

}
if(count==0)
{
    printf("%d ",num);
    numofprimenumbers++;

}
}
printf("\ntotal prime numebers:%d",numofprimenumbers);
getchar();

}