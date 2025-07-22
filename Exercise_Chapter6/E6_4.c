/*E6.4*/
#include <stdio.h>

int add(int x, int y, int z)  // All parameters need their type
{
    return x + y + z;
}

int main(void)
{
    int sum;
    sum = add(1, 2, 3);
    printf("Sum = %d\n", sum);  // Optional: display the result
    return 0;
}