#include<stdio.h>
int main()
{
int a,b,i,total=0;
printf("enter first number of the pair:");
scanf("%d",&a);
printf("enter Second number of the pair:");
scanf("%d",&b);
if(a<b)
{
    return 0;
}
printf("List of odd numbers:");
for(i=b;i<=a;i++)
{
    if((i%2)!=0){
        printf("%d\n",i);
        total+=i;
    }
}
printf("Sum=%d\n",total);

}