//p=part
#include<stdio.h>
main()
{
int n,row,col;
printf("Enter N=");
scanf("%d ",&n);
for(row=n;row>=1;row--)
{
for(col=1;col<=row;col++)
{
    printf("%c",col+64);
}
printf("\n ");
}

}