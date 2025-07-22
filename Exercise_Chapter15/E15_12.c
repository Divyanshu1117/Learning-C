/*E15.12*/
#include <stdio.h>

int main(void)
{
    char str1[] = "hockey";
    char str2[] = "Cricket";
    char *p = str1; // normal pointer
    *p = 'j';       // str1 becomes "jockey"
    p = str2;       // now points to "Cricket"
    return 0;
}