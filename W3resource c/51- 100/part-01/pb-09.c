#include<stdio.h>
int main()
{
    float n,i,sum=0;
    printf("Enter any number : ");
    scanf("%f",&n);
    printf("1+1/2+...+1/%f = ",n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("%f\n",sum);
    return 0;
}
