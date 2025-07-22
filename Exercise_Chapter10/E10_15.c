/* E10.15 */
#include <stdio.h>
#include <string.h>   // For strcpy

int main(void)
{
    char x[] = "Shilpee";
    char y[20];
    
    strcpy(y, "Anjali");  // Copy string into y
    
    printf("%s %s\n", x, y);
    return 0;
}