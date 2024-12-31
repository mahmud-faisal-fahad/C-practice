#include<stdio.h>
int main()
{
int count=1, n;
float x,y=1;
printf("ENter the value of x and n:\n");
scanf("%f %d",&x,&n);
while (count<=n)
{  
    y=y*x;
    count++;
}
printf("x=%f; n=%d;\n x to power n=%f",x,n,y);

}