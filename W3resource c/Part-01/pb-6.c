#include<stdio.h>
int main()
{

    float area,perimeter,radius;
    printf("Enter a radius:");
    scanf("%f",&radius);
    perimeter= 2*3.1416*radius;

      printf("Perimeter of circle:%f inches\n",perimeter);
    area=3.1416*radius*radius;
    printf("Area of circle:%f square inches",area);

}