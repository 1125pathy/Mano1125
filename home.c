include <stdio.h>
int main()
{
int i,n,s=0;
printf("Enter upper limit: ");
scanf("%d", &n);
for(i=1; i<=n; i++)
{
s += i;
}
printf("Sum of first %d natural numbers = %d", n, s);
return 0;
}
