#include<stdio.h>
int main(){
// break and continue statememnt
int i;
for(i=1;i<20;i++)
{
if(i%3==0)
continue;// loop cholte thakbe orthat ai condition true hole loop cholte thakbe
// if er ai condition true hole niche ar jabe na upore uthaiya dibe
// nicher condition er check dibe na atai continue er kaj
printf("%d\n",i);
if(i==10)
break; // loop ta ke off kore dibe and ai condition true hole loop off hoye  jbe
}
/*
1
2
4
5
7
8

*/

}