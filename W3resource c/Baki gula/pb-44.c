#include <stdio.h>
int main() {
    int marks, totalmarks = 0, count = 0;
    float average;
    printf("Enter Mathematics marks (0 to terminate): \n");
    while (1) 
    {
        scanf("%d", &marks);

        if (marks <= 0)
        {
            break;
        }
        totalmarks += marks;
        count++;
    }

    if (count > 0) {
        average = (float) totalmarks / count;
        printf("Average marks in Mathematics: %.2f\n", average);
    } else {
        printf("No marks were entered.\n");
    }
    return 0;
}
