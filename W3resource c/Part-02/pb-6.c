#include <stdio.h>
int main() {
    int amnt, total; 
    printf("Enter the amount: ");
    scanf("%d",&amnt);

    total = (int)amnt/100;
    printf("There are:\n");
    printf("%d Note(s) of 100.00\n", total);
    amnt = amnt-(total*100);
    total = (int)amnt/50;
    printf("%d Note(s) of 50.00\n", total);
    amnt = amnt-(total*50);
    total = (int)amnt/20;
    printf("%d Note(s) of 20.00\n", total);
    amnt = amnt-(total*20);
    
    total = (int)amnt/10;
    printf("%d Note(s) of 10.00\n", total);
    amnt = amnt-(total*10);
    
    total = (int)amnt/5;
    printf("%d Note(s) of 5.00\n", total);
    amnt = amnt-(total*5);
    
    total = (int)amnt/2;
    printf("%d Note(s) of 2.00\n", total);
    amnt = amnt-(total*2);
    
    total = (int)amnt/1;
    printf("%d Note(s) of 1.00\n", total);
    
    return 0;
}
