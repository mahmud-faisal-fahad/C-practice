#include<stdio.h>
int main()
{
int a=10;// Here a is a local variable
printf("Inside the function");
display();


}
void display()
{
printf("Inside the display function=%d\n",a);
/*
error will be shown here
bcz display arekta function 
2 ta function er moddhe hbe na
and local variable always main function er moddhe thake 
jehetu akhne main function sesh hoyese display er moddhome tai akahne error dekhabe 

*/


}