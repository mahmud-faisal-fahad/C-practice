#include<stdio.h>
#define MAX 10
int main(){
int a,b,binomial;
printf("MAX");
for(b=0;b<=10;b++)
printf("%d",b);
printf("\n ---------------------------------------------------\n");
b=0;
do {
    a=0,binomial=1;
    printf("%2d",b);

while(a<=b)
{
    if(b==0 || a==0)
    printf("%4d",binomial);

else
{
    binomial=binomial*(b-a+1)/a;
    printf("%4d",binomial);
}
a=a+1;

}
printf("\n");
b=b+1;
}
while (b<=MAX);
printf("---------------------------------------------------");





}
