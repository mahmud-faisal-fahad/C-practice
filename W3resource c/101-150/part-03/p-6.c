#include <stdio.h>

int main ()
{
float a, array_nums[7];
int i;
printf("Enter 7 array :\n");
for(i=0;i<7;i++)

{
    scanf("%f",&a);
array_nums[i]=a;

}
for(i=0;i<7;i++)
{
    if(array_nums[i]<=0)
    {
        printf("Array_numbers[%d]=%f",i,array_nums[i]);

    }
}

}