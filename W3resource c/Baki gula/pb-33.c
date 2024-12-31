#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5;
    printf("Enter five integers number = ");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
    if(num1>num2&&num1>num3&&num1>num4&&num1>num5)
    {
        printf("Highest number : %d\n",num1);
        printf("Position : 1 ");
    }

    else if(num2>num1&&num2>num3&&num2>num4&&num2>num5)
     {
        printf("Highest number : %d\n",num2);
        printf("Position : 2 ");
     }
    else if(num3>num1&&num3>num2&&num3>num4&&num3>num5)
     {
        printf("Highest number : %d\n",num3);
        printf("Position : 3 ");
     }
    else if(num4>num1&&num4>num2&&num4>num3&&num4>num5)
    {
        printf("Highest number : %d\n",num4);
        printf("Position : 4 ");
    }

   else
    {
        printf("Highest number : %d\n",num5);
        printf("Position : 5 ");
    }
    return 0;
}