#include<stdio.h>
int main()
{
    // A matrix input
int A [3] [2] ,C [3] [2];
for(int row=0; row<3; row++)
{
    for(int col=0;col<2;col++)
    {
        printf("Matrix[%d] [%d]",row,col);
        scanf("%d",&A[row][col]);
    }

    //  A matrix print
}
printf("A =");

for (int row=0; row<3; row++)
{
    for(int col=0;col<2;col++)
    {
        printf("%d ",A[row][col]);
    }
    printf("\n");

}
    // B matrix input
int B [3] [2];
for(int row=0; row<3; row++)
{
    for(int col=0;col<2;col++)
    {
        printf("Matrix[%d] [%d]",row,col);
        scanf("%d",&B[row][col]);
    }

    //  B matrix print
}

printf("B =");
for (int row=0; row<3; row++)
{
    for(int col=0;col<2;col++)
    {
        printf("%d",B[row][col]);
    }
    printf("\n");

}

for (int row=0; row<3; row++)
{
    for(int col=0;col<2;col++)
    {
       C[row][col] = A [row][col] + B [row][col];

    }



}
printf("C =\n");
for (int row=0; row<3; row++)
{
    for(int col=0;col<2;col++)
    {
        printf("%d",C[row][col]);
    }
    printf("\n");

}


}
