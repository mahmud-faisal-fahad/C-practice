#include<stdio.h>
int main()
{
     int num,temp,rem,count=0;
    printf("Enter a five-digit number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        if(rem==3){
            count++;
        }
        temp=temp/10;
    }
      printf("The number of threes in the said number : %d\n",count);
      return 0;
}
