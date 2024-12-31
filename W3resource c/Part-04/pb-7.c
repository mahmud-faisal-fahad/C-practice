#include<stdio.h>
int main()
{
int a,b;
printf("enter the coordinate(x,y)\n");
printf("x=\n");
scanf("%d",&a);
printf("y=\n");
scanf("%d",&b);
if(a>0 && b>0)
{
printf("Quardrant-I(+,+)\n");
}
else if(a<0 && b>0)
{
    printf("Quardrant-II(-,+)\n");
}

else if(a<0 && b<0)
{
    printf("Quardrant-III(-,-)\n");
}
else if(a>0 && b<0)
{
    printf("Quardrant-IV(+,-)\n");
}

return 0;
}