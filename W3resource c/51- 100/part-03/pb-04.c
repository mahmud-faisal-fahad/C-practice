#include<stdio.h>
int main(){


int i;
char* letters = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";

for(i=0;i<53;i++)
{
    printf("%d\t",letters[i]);
if((i+1)%6==0)
printf("\n");
}
}