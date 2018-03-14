#include<stdio.h>
int main()
{
int p,v,r,in;
printf("\n Enter the amount: ");
scanf("%d",&p);
printf("\n Enter the time: ");
scanf("%d",&v);
printf("\n Enter the rate: ");
scanf("%d",&r);
in=(p*r*v)/100;
printf("\n The interest is:%d",in);
}
