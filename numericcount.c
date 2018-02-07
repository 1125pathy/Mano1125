include <stdio.h>
int main()
{
char str[MAX_SIZE];
int alph,i;
alpha =  i = 0;
gets(str);
while(str[i]!='\0')
{
if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
{
alpha++;
}
else
{
i++;
}
printf("Alphabets = %d\n", alphabets);
printf("Digits = %d\n", digits);
printf("Special characters = %d", others);
return 0;
}
