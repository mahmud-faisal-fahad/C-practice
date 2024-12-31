// switch keyword: Switch,case,break,default
// Write a program that read a digit and display its spelling


#include<stdio.h>
int main()
{
int digit;
printf("Enter a digit:");
scanf("%d",&digit);
switch (digit)
{
    case 0:
    printf("Zero\n");
    break;
       case 1:
    printf("one\n");
      break;
       case 2:
    printf("two\n");
      break;
       case 3:
    printf("three\n");
      break;
       case 4:
    printf("four\n");
      break;

       case 5:
    printf("five\n");
      break;
       case 6:
    printf("Six\n");
      break;
       case 7:
    printf("Seven\n");
      break;
       case 8:
    printf("Eight\n");
      break;
       case 9:
    printf("Nine\n");
    break;
default:
printf("Not a valid digit");
}




}