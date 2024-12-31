#include<stdio.h>

int main()
{ 
  int x,y;
printf("Enter a value of x & y:\n");
scanf("%d %d",&x,&y);
printf("Before swapping value of x & y :%d %d\n",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("After swapping the value of x & y : %d %d",x,y);











}