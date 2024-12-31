#include<stdio.h>
int main()
{
    int firstpair,secondpair,sum=0;
    printf("Enter two pair : ");                        
    scanf("%d %d",&firstpair,&secondpair);
    printf("List of odd numbers :\n");
    while(firstpair<=secondpair)
    {
        if(firstpair%2!=0){
        printf("%d\n",firstpair);
        sum=sum+firstpair;
        }
        firstpair=firstpair+1;
    }
    printf("Sum = %d\n",sum);
    return 0;
}