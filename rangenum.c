#include<stdio.h>
int main()
{
int in= 0;
in = getnum();
while (!((input <= 9) && (input >= 1))) 
{
printf("[ERROR] The number you entered is out of range");
input = getnum();
}
printf("The number you entered is %d", in);
return 0;
}      
int getnum() 
{    
int num;
scanf("%d", &num);
return (num);
}
