#include<stdio.h>
void main()
{
int v;
printf("Enter thr number:");
scanf("%d",&v);
if(v%13==0)
{
printf("%d is a multiple of 13",v);
}
else
{
printf("%d is not a multiple of 13",v);
}
getch();
}
