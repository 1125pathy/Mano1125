#include <stdio.h>
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
int main()
{
int v, p;
printf("Enter Value of v ");
scanf("%d", &v);
printf("\nEnter Value of p ");
scanf("%d", &p);
swap(&v, &p);
printf("\nAfter Swapping: v = %d, p = %d", x, p);
return 0;
}
