#include<stdio.h>
void main()
{
int v,r,p=1;
printf("Enter the number:");
scanf("%d",&v);
while(v!=0)
{
r=v%10;
p=p*r;
v=v/10;
}
printf("The Answer is: %d",p);
}
