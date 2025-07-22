/*E15.18*/
#include <stdio.h>
#include <stdarg.h>

void func(int count, ...); // count = number of variable arguments

int main(void)
{
    func(4, 2, 3, 8, 5); // 4 values: 2, 3, 8, 5
    return 0;
}

void func(int count, ...)
{
    va_list ap;
    va_start(ap, count);

    for (int i = 0; i < count; i++)
        printf("%d ", va_arg(ap, int));

    va_end(ap);
}