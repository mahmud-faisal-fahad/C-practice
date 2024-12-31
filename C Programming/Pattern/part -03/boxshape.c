//p=part

 // box shape
#include<stdio.h>
int main()
{
int n,row,col;
printf("Enter N=");
scanf("%d ",&n);

for(row=1;row<=n;row++)
{

for(col=1;col<=row;col++)
// printig space

{
  if(row==1 || row==n ||col==1 || col==n )
  {
    printf(" * ");
  }
  else{
    printf(" ");
  }
}


printf("\n ");
}

}
