#include <stdio.h>
#include <string.h>
void main()
{
char p[200];
int cnt = 0, i;
printf("enter the string\n");
scanf("%[^\n]s", s);
for (i = 0;p[i] != '\0';i++)
{
if (p[i] == ' ')
cnt++;    
}
printf("number of words in given string are: %d\n", cnt + 1);
}
