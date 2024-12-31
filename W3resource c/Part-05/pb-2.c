#include<stdio.h>
int main()
{
float a=0,b=1,c,i;
for(i=1;i<=7;i+=2)
{
c=(i/b);
a+=c;
b=b*2;

}

printf("Value of series :%f\n",a);

}