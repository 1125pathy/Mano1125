#include <stdio.h>
int main()
{
    long long v;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &v);

    while(v != 0)
    {
        
        v /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
