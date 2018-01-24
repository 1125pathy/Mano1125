#include <stdio.h>
int main()
{
int v, p, flag = 0;
printf("Enter a positive integer: ");
scanf("%d",&v);
for(i=2; i<=v/2; ++i)
{
 if(v%p==0)
        {
            flag=1;
            break;
        }
 }

 if (flag==0)
 printf("%d is a prime number.",v);
  else
  printf("%d is not a prime number.",v);
 return 0;
}
