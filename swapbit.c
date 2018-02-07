#include <stdio.h>
int main()
{
int v = 65;
int p = 120;
printf(" value of i=%d k=%d b4 swapping", i, k);
v = v ^ p;
p = v ^ p;
v = v ^ p;
printf("value of i=%d k=%d after swapping", i, k);
return 0;
}
