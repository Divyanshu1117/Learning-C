/*E6.2*/
#include <stdio.h>

int func(int a, int b);  // Declare function returning int

int main(void)
{
    int x;
    x = func(2, 3);
    printf("x = %d\n", x);  // Output: x = 5
    return 0;
}

int func(int a, int b)
{
    int s;
    s = a + b;
    return s;  // Return the sum
}