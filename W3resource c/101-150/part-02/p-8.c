#include <stdio.h>

int main ()
{
float marks,total_marks=0;
int i=0,subject=0;
printf("Enter Five subject marks(0-100)\n");
while (subject!=5)
{
scanf("%f",&marks);
if(marks<0 || marks>100)
{
    printf("Invalid marks");
}
else
{
    total_marks=total_marks+marks;
    subject++;
}

}
printf("Average marks = %f",total_marks);














}