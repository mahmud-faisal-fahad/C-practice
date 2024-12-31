#include<stdio.h>
int main()
{
    int num,rem;
    printf("Enter any number : ");
    scanf("%d",&num);
    rem=num/1000000;
    printf("%d ",rem);
    num=num%1000000;
    rem=num/100000;
    printf("%d ",rem);
    num=num%100000;
    rem=num/10000;
    printf("%d ",rem);
    num=num%10000;
    rem=num/1000;
    printf("%d ",rem);
    num=num%1000;
    rem=num/100;
    printf("%d ",rem);
    num=num%100;
    rem=num/10;
    printf("%d ",rem);
    num=num%10;
    rem=num/1;
    printf("%d ",rem);
    num=num%1;
    return 0;
}
