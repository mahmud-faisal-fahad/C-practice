#include<stdio.h>
int main()
{

    int a,b, count = 1;

    printf("Enter number of lines: \n");
    scanf("%d", &a);
    printf("Number of characters in a line: \n");
    scanf("%d", &b);

    for (int i = 0; i < a; i++) 
    { printf("\n");
        for (int j = 0; j < b; j++) 
        {
            printf("%d  ", count); 
            count++;
        }
    
    }


}



