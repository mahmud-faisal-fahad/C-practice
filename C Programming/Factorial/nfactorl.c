#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    fact=fact*i;//1,2,6,24,120......
}
printf("%d\n",fact);
getch();

}