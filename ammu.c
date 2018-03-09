#include <stdio.h>
void main()
int v1, v2, j, gcd;
printf("Enter two integers: ");
scanf("%d %d", &v1, &v2);
for(j=1; j <= v1 && j <= v2; ++j)
{
if(v1%j==0 && v2%j==0)
gcd = j;
}
printf("G.C.D of %d and %d is %d", n1, n2, gcd);
getch();
}
