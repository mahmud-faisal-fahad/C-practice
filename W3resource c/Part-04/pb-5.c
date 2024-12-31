#include<stdio.h>
int main()
{
int a,b,i,total=0;
printf("enter first number of the pair:");
scanf("%d",&a);
printf("enter Second number of the pair:");
scanf("%d",&b);
if(a>b)
{
  printf("The pair is in descending order!");

}
else
{
    printf("The pair is in ascending order!");

}
return 0;
}

