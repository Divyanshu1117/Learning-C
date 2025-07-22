/*E5_15*/
#include <stdio.h>
int main(void)
{
    int var = 2, x = 1, y = 2;

    if (var == x)
        x++;
    else if (var == y)
        y++;

    printf("x=%d, y=%d\n", x, y);
    return 0;
}