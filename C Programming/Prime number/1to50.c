
#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
int num,i,count=0;
printf("Enter any number:");
scanf("%d",&num);
if(num<=1)
{
    count=1;
}
for(i=2;i<=num/2;i++)/*
divided by 2 deya hoyese krn kono value ke tar ordek er porjonto oi songkha daara vag jay ordek er besshi value dara vag jay na
exmp- 16
ar er order er (8) er kono songkha dara vag  jay na tai deya hoyese 
*/

{
if(num%i==0)
{
count++;
break;
}

}
if(count==0)// count mane koto akta value ke divide kora jasche
{
    printf("%d is a prime number\n",num);
}
else{
    
    printf("%d is not a prime number\n",num);
}

getchar();

}