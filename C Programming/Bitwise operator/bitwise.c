/*
can only be used on integrals , don't work with float

bitwise oeprator= AND , OR , NOT,EXOR, left shift ,Right shift
bitwise operator = &,| , ~, >> ,<< , ^ .

a=32 ,binary= 00100000
b=12 , binary= 00001100
a&b= 00000000

*/
#include<stdio.h>
int main()
{
int a= 32;
int b=12;
int c;
c=a&b;// gu  kora(*)
printf("a&b=%d\n",c);
c=a|b; // jog kora (+)
printf("a|b=%d\n",c);
c=a^b;//same input hole = output 0 hbe
printf("a^b=%d\n",c);


}
