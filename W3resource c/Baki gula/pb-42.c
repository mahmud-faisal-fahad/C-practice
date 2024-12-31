#include <stdio.h>

int main() {
    int n, i;
    printf("Enter  number of lines: \n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }

    return 0;
}
