#include <stdio.h>
int main() 
{
int n,t;
printf("\n Enter the strings : ");
scanf("%d",&n);
printf("\n The reversed string is : ");
while(n!=0) 
{
t=n%10;
if(t!=0)
{
printf("%d",t);
}
n=n/10;
}
return 0;
}
