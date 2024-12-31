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
    count++;
}
for(i=2;i<num;i++)


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



}