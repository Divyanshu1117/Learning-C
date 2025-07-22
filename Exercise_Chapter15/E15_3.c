/*E15.3*/
#include <stdio.h>

struct tag
{
    int x;
    int y;
};

int main(void)
{
    struct tag s;
    s.x = 4;
    s.y = 5;
    printf("%d %d\n", s.x, s.y);
    return 0;
}