#include<stdio.h>
int main()
{
    int a,b;
printf("read the integer from keyboard:");
scanf("%d",&a);
printf("Integer value=%d",a);
a <<=2;
b=a;
printf("The left shifted data is= %d",b);

return 0;

}