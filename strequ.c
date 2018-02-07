#include <stdio.h>
int main()
{
char a[10], b[10];
printf("Enter a string\n");
gets(a);
printf("Enter a string\n");
gets(b);
if (strcmp(a,b) == 0)
printf("strings are equal\n");
else
printf("strings are not equal\n");
return 0;
}
