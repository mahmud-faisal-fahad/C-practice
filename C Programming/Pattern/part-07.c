#include<stdio.h>
main()
{
int n,row,col;
printf("Enter N=");
scanf("%d ",&n);
for(row=1;row<=n;row++)
{
    for(col=1;col<=row;col++)
    {
        printf(" * ");//small letter print col+96
    }
    printf("\n");
}


}