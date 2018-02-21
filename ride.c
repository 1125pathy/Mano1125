#include <stdio.h>
void main()
{
int v,p,m;
printf("Enter v,p values:");
scanf("%d%d",&v,&p);
m=v-p;
printf("The Product of two num is:%d",m);
if(m%2==0)
{
printf("\nThe Product is Even\n");
}
else
{
printf("\nThe product is ODD\n");
}
getch();
}
