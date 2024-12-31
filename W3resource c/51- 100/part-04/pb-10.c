#include<stdio.h>
int main()
{
    int temp,rem,sum=0,x,y,i,count=0,a;
    printf("Enter X : ");
    scanf("%d",&x);
    printf("Enter Y : ");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
    {
        temp=i;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(sum==i){

         for(a=2;a<sum;a++)
    {
        if(sum%a==0)
        {
            count++;
        }

    }
    if(count==0)

        printf("%d\n",sum);
    }
        sum=0;
    }
    return 0;
}
