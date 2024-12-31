#include<stdio.h>
int main()
/*
write a program that read 3 numbers and display maximum

*/
{
int a,b,c;
printf("Enter 3 numbers");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
printf("Large number =%d\n",a);
else if(b>c && b>a)//2 tai stto hote hbe otherwise nicher line e jabe na
printf("Large number=%d",b);
else if(c>a && c>b)
printf("Large number=%d",c);
else 
printf("Numbers are equal");


}