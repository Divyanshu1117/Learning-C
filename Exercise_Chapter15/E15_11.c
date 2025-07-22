/*E15.11*/
#include <stdio.h>

int main(void)
{
    char str1[] = "hockey";
    char str2[] = "Cricket";
    char *p = str1;   // Not const
    *p = 'j';         // Now valid (changes str1[0] to 'j')
    p = str2;
    return 0;
}