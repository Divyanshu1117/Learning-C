/*E5_14*/
#include <stdio.h>

int main(void)
{
    int k = 10;
    while (k < 12)
    {
        switch (k)
        {
        case 5:
        case 10:
            k++;
            continue;  // This continues the while loop
        case 15:
        case 20:
            k--;
            break;
        }
        break;
    }
    printf("k = %d\n", k);
    return 0;
}