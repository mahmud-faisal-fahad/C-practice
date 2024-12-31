#include<stdio.h>
// first and second largest number from array

int main()
{
    // sizeof array
int numbers[]= {40,58,68};
int lengthofArray = sizeof(numbers) / sizeof (numbers [0]);
printf("%d",lengthofArray);
if(lengthofArray<2)
{
printf("Array should have atleast 2 elements\n");

}

int first  ,second;
if(numbers[1] > numbers[0])
{
first=numbers[1];
second=numbers[0];
}
else
{  second=numbers[1];// second  = 58
    first=numbers[0]; // first = 68
 
}

// 40, 58 ,68

// ato tuku code theke bujha jay je first number : 58
// second largest = 40
// ai 2 ta largest number ber koraa jbe bt 3 ta num. nile nicher code ta llikhte hbe

for(int index=2;index<lengthofArray;index++)
{
    if(numbers[index]>first)
    { second = first;
        first = numbers[index];
        

    }
    else if(numbers[index]> second && numbers[index]!=first)
    // 2nd condtion holo 1st number er soman hote parbe na

    {
        second = numbers[index];

    }
}
printf("First largest : %d\n",first);
printf("second largest : %d\n",second);


for(int index=2;index<lengthofArray;index++)
{
    printf("%d", numbers[index]);
    
}






}