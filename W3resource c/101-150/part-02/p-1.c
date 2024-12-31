#include<stdio.h>
int main()

{
int a ,i;
printf("Enter the number:\n");
scanf("%d",&a);
for(i=1;i<=100;i++)
{
    if(i%a==3)
    {
        printf("%d \n",i);

    }
}


}