#include <stdio.h>

int main () {

    int x, i, n = 0, temp_num = 0, position = 0;
    printf("Enter 6 numbers:\n");
    for (i = 1; i < 7; i++){
     scanf("%d", &x);

  n = x; 

 if (n >= temp_num){
 temp_num = n; 
   position = i; 
        }
    }


    printf("Maximum value: %d\n", temp_num);
    printf("Position: %d", position);

    return 0; 
}
