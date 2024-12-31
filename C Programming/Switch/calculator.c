#include<stdio.h>
int main()
{
double a,b;
char oper;//operator
printf("Enter an operator(+,-,*,/):");
scanf("%c",&oper);
printf("Enter two numbers");
scanf("%lf %lf",&a,&b);


switch (oper)

{
case '+':
{
    printf("%lf +%lf =%lf\n",a,b,a+b);
    break;
}
case '-':
{
    printf("%lf -%lf =%lf\n",a,b,a-b);
    break;
}
case '*':
{
    printf("%lf *%lf =%lf\n",a,b,a*b);
    break;
}
case '/':
{
    printf("%lf /%lf =%lf\n",a,b,a/b);
    break;
}
default:
printf("Not a valid operator");

}


}