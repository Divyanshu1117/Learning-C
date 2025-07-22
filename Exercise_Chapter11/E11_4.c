/*E11_4*/
#include <stdio.h>

struct tag // Global struct definition
{
    int i;
    char c;
};

void func(struct tag v);

int main(void)
{
    struct tag var = {2, 's'};
    func(var);
    return 0;
}

void func(struct tag v)
{
    printf("%d  %c\n", v.i, v.c);
}