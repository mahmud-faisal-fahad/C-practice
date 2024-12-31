//p=part
#include<stdio.h>
main()
{
int n,row,col;
printf("Enter N=");
scanf("%d ",&n);
// printing space
for(row=n;row>=1;row--)
{

for(col=1;col<=n-row;col++)
// printing number
{
    printf(" ");
}
for(col=1;col<=row;col++)
{
printf("%d",col);
}
printf("\n ");
}

}
