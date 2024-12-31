#include <stdio.h>

int main() {
    int n, num = 1;
    printf("Enter number of lines: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; j < 3; j++) {
            printf("%d  ", num++);
            
        }
        
    }
    return 0;
}
