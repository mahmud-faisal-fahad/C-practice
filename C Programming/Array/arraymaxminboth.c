#include<stdio.h>
int main()
{

int numbers[]={20,40,1,100,98,-4};

int min=numbers[0];
int max=numbers[0];
// 1st e dhore nisi je 20 shb cheye boro trpr if condition diye kresi

for(int index=1;index<6;index++)
{
    if(min>numbers[index])
    {
       
        min=numbers[index];
    }
    else if(max<numbers[index])
    {
        max=numbers[index];
    }
}
printf("Min = %d\n",min);
printf("max=%d\n",max);

}