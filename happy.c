#include <stdio.h>
int main()
{
int p, v, t1 = 0, t2 = 1, nextTerm;
printf("Enter the number of terms: ");
scanf("%d", &v);
printf("Fibonacci Series: ");
for (p = 1; p <= v; ++p)
{
printf("%d, ", t1);
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
}
return 0;
}
