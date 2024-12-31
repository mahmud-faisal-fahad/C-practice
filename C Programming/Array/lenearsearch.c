#include<stdio.h>
int main(){
int numbers[]={20,40,1,100,98,-4};
int searchNumber = 40;
int found=-1;// ata mne holo number khuje pai nai
// found =1  mane number ti khuje peyechi

for(int index=0;index<6;index++)
{
    // index<6 disi 5 dei nai krn 6 theke 1 kombe tai mane 6 theke kom mne 5 porjonto

    if(numbers[index]==searchNumber)
    {
        found=index;
        break; 
    }
}
if(found==-1)
{
    printf("Not a found");

}
else
{
    printf("found");
printf(" %d is found in position %d",searchNumber,found);

}
}