#include <stdio.h>

int main ()
{
int a,b;
float result;
printf("Enter two values:\n");
scanf("%d %d",&a,&b);
if(b==0)
{
    printf("Division not possible.\n");
 return 0;
}
else
{
    result= (float)a/b;
}
printf("Result:%f",result);


}