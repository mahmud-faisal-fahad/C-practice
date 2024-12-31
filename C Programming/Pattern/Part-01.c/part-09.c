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
    printf(" %c",row+64);
}
printf("\n ");
}

}
