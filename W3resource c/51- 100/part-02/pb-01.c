#include<stdio.h>
#include<math.h>
int main()
{
double x ,value;
printf("Enter a value of x:\n");
scanf("%lf",&x);
if(x!=0.0)
{
value=sin(1/x);
printf("Value of sin(1/x)is=%lf",value);

}
else{
    printf("Value of x should not be zero");

}

}










