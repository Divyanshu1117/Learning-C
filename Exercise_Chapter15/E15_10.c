/*E15.10*/
#include <stdio.h>
#include <stdlib.h>

int *func(void);

int main(void)
{
    int *ptr = func(); // not const
    *ptr = 7;          // now allowed
    printf("*ptr=%d\n", *ptr);
    free(ptr); // always free malloc'd memory
    return 0;
}

int *func(void)
{
    int *p = (int *)malloc(sizeof(int));
    if (!p) // check allocation
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    return p;
}