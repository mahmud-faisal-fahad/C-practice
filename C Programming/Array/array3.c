#include<stdio.h>
int main()
{
// array declaration 
int numbers[5];

// array initialization
for(int index=0; index<5; index++)
{
    printf("number %d = \n",index+1);
    scanf("%d",&numbers[index]);
}
for(int index=0; index<5; index++)
{
    printf(" %d \n",numbers[index]);
   
}


}