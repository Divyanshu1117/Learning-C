/*E6.16*/
#include <stdio.h>

int func(int a, int b);  // Function prototype

int main(void)
{
    int c;
    c = func(3, 5);
    printf("%d", c);
    return 0;
}

int func(int a, int b)
{
    return (a + b);
}