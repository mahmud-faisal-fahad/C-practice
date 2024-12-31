/*
Enter any number : 3
num x i = num*i
3x1=3
3x2=6
3x3=9
---------
--------
3x10=30 

*/
#include<stdio.h>
int main()
{
    while (1)// while(1) mane true
// mane all time  ai looop cholte thakbe aktar por akta value dile namta aaste thakbe    
    
    {
int num,i;
printf("Enter any number: ");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
printf("%d x %d =%d\n",num,i,num*i);

}

}
}