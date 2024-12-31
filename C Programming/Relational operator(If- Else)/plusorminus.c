#include<stdio.h>
int main()
{
    int num;
printf("Enter any number:");
scanf("%d",&num);
if(num>0)
{
    printf("POSITIVE");
}
else if(num<0)
{
    printf("NEGATIVE");
}
else{
    printf("ZERO");

}
getch();
}