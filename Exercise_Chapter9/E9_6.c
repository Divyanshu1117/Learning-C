/*E9.6*/
#include <stdio.h>

int main(void)
{
    int i, arr[5] = {25, 30, 35, 40, 55};
    int *p = arr;  // Pointer pointing to the first element of the array

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *p);  // Print the value pointed by p
        p++;                // Move pointer to next element
    }
    return 0;
}