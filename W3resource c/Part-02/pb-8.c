#include <stdio.h>
int main() {
    int days, y, m, d; 
    printf("Enter days: ");
    scanf("%d", &days);
    y = (int)days/365;
    days = days-(365*y);
    m = (int)days/30;
    d = (int)days-(m*30);

    printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", y, m, d);
    return 0;
}
