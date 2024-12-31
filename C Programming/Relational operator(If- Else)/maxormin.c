#include<stdio.h>
int main()
{
    int a,b;
printf("Enter two number:");
scanf("%d %d",&a,&b);
if(a>b)
{
    printf("Large=%d\n",a);

}
else if(a<b)
{
printf("Large=%d\n",b);


}
else{
    printf("Equal");

}
}