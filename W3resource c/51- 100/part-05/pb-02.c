#include<stdio.h>
int main()
{
    int num,i,fact=1,rem;
    printf("Enter any possitive number :");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial = %d\n",fact);
    while(fact!=0)
    {
        rem=fact%10;
        if(rem!=0){
            printf("The last non-zero digit of the said factorial : %d\n",rem);
            break;
        }
        else
           fact=fact/10;
    }
    return 0;
}

