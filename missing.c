#include<stdio.h>
void main()
{
int v;
printf("Enter the number:");
scanf("%d",&v);
if(v%7==0)
{
printf("%d is a multiple of 7",v);
}
else
{
printf("%d is not a multiple of 7",v);
}
getch();
}
