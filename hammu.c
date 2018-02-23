#include<stdio.h>
void main()
{
int n,v;
printf("Enter n:");
scanf("%d",&n);
if (n % 10)
{
v = n + (10 - n % 10);
printf("The multiple of  %d is: %d",n,v);
}
getch();
}
