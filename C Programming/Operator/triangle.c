//write a programe that calculates the area of a triangle

#include<stdio.h>
int main()
{
float base,height,area;

printf("base=");

scanf("%f",&base);

printf("Height=");

scanf("%f",&height);

area= (float)1/2*base*height;
printf("area=%f\n",area);


return 0;

}