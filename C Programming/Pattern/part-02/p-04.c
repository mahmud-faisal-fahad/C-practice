//p=part
#include<stdio.h>
main()
{
int n,row,col;
printf("Enter N=");
scanf("%d ",&n);
// printing space
for(row=1;row<=n;row++)
{

for(col=1;col<=n-row;col++)
// printing number
{
    printf(" ");
}
for(col=1;col<=row;col++)
{
printf("%c",col+64);
}
printf("\n ");
}
for(row=n-1;row<=1;row--)
{

for(col=1;col<=n-row;col++)
// printing number
{
    printf(" ");
}
for(col=1;col<=row;col++)
{
printf("%c",col+64);
}
printf("\n ");
}

}