#include<stdio.h>
#include<string.h>
void main()
{
int v,j;
char a[100];
printf("Enter the string: ");
scanf("%[^\n]s",a);
for(v=0;v<strlen(a);v++)
{
printf("%c",a[v]);
v++;
}
printf(" ");
for(v=1;a[v]!='\0';v++)
{
printf("%c",a[v]);
v++;
}
}
