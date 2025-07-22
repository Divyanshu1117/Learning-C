/*E9.16*/
#include <stdio.h>

int main(void)
{
    int arr[8] = {11, 22, 33, 44, 55, 66, 77, 88};
    int *p, *q;

    q = arr + 3;  // q points to arr[3] (44)
    p = arr + 7;  // p points to arr[7] (88)

    printf("%d %d", *p, *q);
    return 0;
}