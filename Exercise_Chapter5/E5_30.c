/*E5_30*/
#include <stdio.h>
int main(void)
{
    int i = 1;

    // Infinite for loop
    for (;;)
        if (i++ == 3)
            break;
    printf("%d ", i); // Prints 4 (1,2,3 then i becomes 4)

    i = 1;

    // Infinite while loop
    while (1) // Use 1 for infinite loop
        if (i++ == 3)
            break;
    printf("%d ", i); // Prints 4

    return 0;
}