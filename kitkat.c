#include <stdio.h>
int main()
{
int v, i, f = 0;
printf("Enter a positive integer: ");
scanf("%d",&v);
for(i=2; i<=v/2; ++i)
{
if(v%i==0)
{
f=1;
break;
}
}
if (f==0)
printf("%d is a prime number.",v);
else
printf("%d is not a prime number.",v);
return 0;
}
