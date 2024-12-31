#include<stdio.h>
main()
{
    
float i,result=1,n;//result =0 hoe nai karon 0 dia gun korle ans 0 e chole asbe tai 1 dhora hoyeche

printf("Enter n:");
scanf("%f",&n);
for(i=1;i<=n;i++)//i++mane i=i+1
{
result= result*i*i;// similarly 1^3 hole result *i*i*i

}

printf("Sum =%f",result);


}