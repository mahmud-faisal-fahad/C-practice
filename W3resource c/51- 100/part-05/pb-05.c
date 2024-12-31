#include<stdio.h>
int main()
{
    float C,F,i;
    printf("Celsius to Fahrenheit\n");
    printf("---------------------\n");
    printf("Celsius   Fahrenheit\n");
    for(i=0;i<=150;i=i+10)
    {
        F =(i*1.8)+32;
        printf("%.1f         %.1f\n",i,F);
    }
    printf("Fahrenheit to Celsius\n");
    printf("---------------------\n");
    printf("Fahrenheit  Celsius\n");
    for(i=0;i<=150;i=i+10)
    {
        C=(i-32)/1.8;
        printf("%.1f         %.1f\n",i,C);
    }
    return 0;
}
