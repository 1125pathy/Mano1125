#include <stdio.h>
void main()
{
int x, y, t;
printf("Enter the value of x and y\n");
scanf("%d%d", &x, &y);
printf("Before Swapping\nx = %d\ny = %d\n",x,y);
t  =  x;
x  =  y;
y  =  t;
printf("After Swapping\nx = %d\ny = %d\n",x,y);
getch();
}
