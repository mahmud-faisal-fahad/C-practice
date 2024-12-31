#include<stdio.h>
int main()
{

char name[50];
printf("Enter Your Name:");
fgets(name,sizeof(name), stdin);
printf("HELLO");
puts(name);

}