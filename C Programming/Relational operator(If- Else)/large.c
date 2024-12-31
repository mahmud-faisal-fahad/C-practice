#include<stdio.h>
int main()
{
int a,b;
printf("Enter a=");
scanf("%d",&a);
printf("Enter b=");
scanf("%d",&b);
if(a>b)
{
printf("Large num:%d",a);
}
else if(a<b)
{
printf("Large number:%d",b);


}
else 
{
    printf("Numbers are equal");

}
}