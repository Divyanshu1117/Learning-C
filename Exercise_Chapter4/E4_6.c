/*E4.6*/
#include <stdio.h>

int main(void)
{
    int x, y, z;
    x = 8;         // Start with 8
    y = ++x;       // Pre-increment x, so x=9, y=9
    z = x + y;     // z = 9 + 9 = 18
    printf("x=%d, y=%d, z=%d\n", x, y, z);
    return 0;
}