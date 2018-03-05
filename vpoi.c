#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter the numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("The odd number is...............\n");
if(a%2!=0)
{
printf("%d\n",a);
}
if(b%2!=0)
{
printf("%d\n",b);
}
if(c%2!=0)
{
printf("%d\n",c);
}
if(d%2!=0)
{
printf("%d\n",d);
}
getch();
}
