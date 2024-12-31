#include<stdio.h>
int main()
{
char ch;
printf("Enter any character");
scanf("%c",&ch);
if(ch>='a' && ch<='z' )
{
printf("Small");

}
else if(ch>='A' && ch<='Z')
{printf("Capital");}
else 
{
printf("Not a letter");
}


}