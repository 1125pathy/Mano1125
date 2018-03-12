#include<stdio.h>
int main()
{
int l,b,h,a,v;
scanf("%d%d%d",&l,&b,&h);
a=l*b*h;
printf("\n Volume of cuboid: %d",a);
v=2*((l*b)+(l*h)+(b*h));
printf("\n Total surface area: %d",v);
}
