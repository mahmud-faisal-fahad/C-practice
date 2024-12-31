#include<stdio.h>
int main(){
float i,n,count=0,dis;
printf("Enter N:");
scanf("%f",&n);
dis=(0.5+0.5);
for(i=-0.49;i<0.5;i=i+(dis/n))
{
    printf("%f\n",i);
    count++;
}
printf("Number =%d",count);









}