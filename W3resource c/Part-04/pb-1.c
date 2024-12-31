#include<stdio.h>
int main()
{
int a;
printf("Enter an integer:");
scanf("%d",&a);
if(a==0)
{
    printf("Positive\n");

}
else if(a<0 && (a%2)!=0)
{
    printf("Negative odd\n");
}
else if(a<0 && (a%2)==0)
{
    printf("Negative even\n");
}
else if(a>0 && (a%2)!=0)
{
    printf(" Positive odd\n");
}
else if(a>0 && (a%2)==0)
{
    printf("  Positive even\n");
}
else
{
    printf("Invalid value , Enter an integer");
}


}