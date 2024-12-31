#include <stdio.h>
int main()
{
    int array1[5] = {10, 20, 30, 40, 50}, array2[5], i;
    printf("Array1:\n");

    for (i = 0; i < 5; i++)

    {
        printf("%d", array1);
    }
    // copy all elements from array1 to array 2
    for (i = 0; i < 5; i++)
    {
        array2[i] = array1[i];
    }
    printf("\nArray2:\n");
    for (i = 0; i < 5; i++)

    {
        printf("%d", array2[i]);
    }
}