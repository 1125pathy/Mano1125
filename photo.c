#include<stdio.h>
void main()
{
int a,b,c,d,e;
printf("Enter the three numbers:");
scanf("%d%d%d",&a,&b,&c);
d=a*b;
e=d%c;
printf("The answer is:%d",e);
getch();
}
