/*E6.26*/
#include <stdio.h>

void func(int a);

int main(void)
{
    func(1);
    func(3);
    return 0;
}

void func(int a)
{
    static int b = 2; // static variable, initialized only once
    a++;
    b++;
    printf("%d %d\n", a, b);
}