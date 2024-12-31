// bhul ase atay logic mile na

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
int num,i,a,count=0,numofprimenumbers=0;
printf("Enter an integer: \n");
scanf("%d",&a);
for(num=1;num<=a;num++){
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

    numofprimenumbers++;

}
}
printf("total prime numebers:%d",numofprimenumbers);
getchar();

}