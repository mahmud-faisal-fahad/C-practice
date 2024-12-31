#include<stdio.h>
int main()
{
int x=10;
printf("%d\n",x++);//x=10
printf("%d\n",x);//x=11
printf("%d\n",++x);//x=12
printf("%d\n",x);//x=12
printf("%d\n",x--);//x=12
/*
akhne x er man 5th line theke 1 kombe and
6th line er jonnoo 1 kombe orthat 2 kombe
*/
printf("%d\n",--x);//x=10
return 0;




}