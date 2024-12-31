#include<stdio.h>
int main()
{
int choice;
float temp,convertedtemp;
printf("Temp. convertion menu\n");
printf("1. Fahrenheit to celcius\n");
printf("2.Celcius to fahrenheit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
printf("Enter the fahrenheit:");
scanf("%f",&temp);
convertedtemp =(temp-32)/1.8;
printf("The temperature in celcius is: %f\n",convertedtemp);
break;
}
case 2:
{
printf("Enter the Celcius:");
scanf("%f",&temp);
convertedtemp =(1.8*temp)+32;
printf("The temperature in celcius is: %f\n",convertedtemp);

break;
}
default:
printf("Not a valid option");
}



}