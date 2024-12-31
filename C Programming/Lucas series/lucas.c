#include<stdio.h>
main()
{
int numtemrs,first=2,second=1;
printf("Enter the number of terms in lucas series:\n");
scanf("%d",&numtemrs);
printf("Lucas series up to %d terms :\n");
printf("%d %d",first,second);
for(int i=3;i<=numtemrs;i++)
{
    int next =first+second;
    printf("%d",next);
    first=second;
    second=next;
}
printf("\n");



}