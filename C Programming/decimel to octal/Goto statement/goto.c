#include<stdio.h>
int main()
{
int i=1;
print: // ata ke bole lavel
// akhne print er poriborte jekono name deya jabe
/*
we know line by line kaj krbe, bt akhne ata hbe  na na krn ami lavel use krsi and goto use krsi
goto holo dak dey statement ke 
goto use korar krn e 1st e print krbe na 1st e aisa condition check dibe then upore jbe atai goto er kaj
kono statement ke niche deke niya asha
*/
printf("%d\t",i);// \t mane tab aktu shore shore asbe
i++;
if(i<5)
goto print;// level is calling here




}