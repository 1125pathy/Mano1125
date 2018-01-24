#include <stdio.h>
int main()
{
int v, revInt = 0, remainder, origInt;
printf("Enter an integer: ");
    scanf("%d", &v);

    origInt = v;

    
    while( v!=0 )
    {
        remainder = v%10;
        revInt = revInt*10 + remainder;
        n /= 10;
    }

   
    if (origInt == revInt)
        printf("%d is a palindrome.", origiInt);
    else
        printf("%d is not a palindrome.", origInt);
    
    return 0;
}
