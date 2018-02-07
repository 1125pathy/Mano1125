#include <stdio.h>
#include <string.h>
void main()
{
char s[200];
int count = 0, v;
printf("enter the string\n");
scanf("%[^\n]s", s);
for (v = 0;s[v] != '\0';v++)
{
if (s[v] == ' ')
count++;    
}
printf("The number of words  are: %d\n", count + 1);
}
