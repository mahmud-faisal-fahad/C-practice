#include <stdio.h>
int main() {
    char id[10];         
    int hour;  
    double value, salary; 
    printf("Input the Employees ID(Max. 10 chars):\n ");
    scanf("%s", &id);
    printf("Input the working hrs:\n ");
    scanf("%d", &hour);
    printf("Salary amount/hr:\n ");
    scanf("%lf", &value);
    salary = value * hour;

    printf("Employees ID = %s\nSalary = U$ %.2lf\n", id, salary);

    return 0;
}