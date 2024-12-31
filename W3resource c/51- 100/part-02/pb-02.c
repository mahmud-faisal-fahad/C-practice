#include<stdio.h>
int main(){
int i,m=1,n,sum=0;
printf("Enter a positive number:");
scanf("%d",&n);
if(n<1 || n>=100)
{
    printf("Wrong input");
    return 0;
}
for(i=1;m<=n;i++)
{
    sum+=m*m*m*m;
    m+=i;
}
printf("Sum of the series :%d\n",sum);








}