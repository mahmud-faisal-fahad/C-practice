#include<stdio.h>
int main()
{
int size,i,j;
printf("Enter the size of the sq:");
scanf("%d",&size);
if(size<1 || size>10)
{
    printf("Error");
    return 0;
}
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
{
    if(i==0 || i==size-1)
    printf(" #");
else if(j==0 || j==size-1)
    printf(" #");
    else
        printf("  ");
} 
printf("\n");
}

}
