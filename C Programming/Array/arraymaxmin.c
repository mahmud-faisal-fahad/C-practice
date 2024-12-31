#include<stdio.h>
int main()
{

int numbers[]={20,40,1,100,98,-4};

int max=numbers[0];
// 1st e dhore nisi je 20 shb cheye boro trpr if condition diye kresi

for(int index=1;index<6;index++)
{
    if(max<numbers[index])
    {
        // jodi 20 theke kono songkha boro hoe tahole setai hbe maximum and setai print hbe
        // akhne loop deya hoyeche orthat 20 er boro kintu 40 o bt seta print hoe nai
        // karon loop ache akhne 20 erpor 40 trpr 100 abave kore shb gula check dibe trpr condition fill up hbe

        max=numbers[index];

    }
}
printf("Min = %d\n",max);










}