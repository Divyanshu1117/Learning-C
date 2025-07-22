/*P10.14 Program to show the differences between array of strings and array of pointers to strings*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // for malloc

int main(void)
{
    char arr[5][10]; // Array of strings (5 strings, each up to 9 chars + '\0')
    char *arrp[5];   // Array of pointers to strings

    // For arr, we must use strcpy
    strcpy(arr[0], "January"); // Valid
    arrp[0] = "January";       // Valid (points to string literal)

    strcpy(arr[1], "February"); // Valid
    // arrp[1] = "February"; is fine for pointing
    arrp[1] = "February"; // Valid (but read-only memory)
    // If we want to modify arrp[1], we must malloc

    printf("Enter a month: ");
    scanf("%9s", arr[2]); // Valid, writes into arr[2]

    // For arrp[2], we must allocate memory
    arrp[2] = (char *)malloc(10);
    printf("Enter another month: ");
    scanf("%9s", arrp[2]); // Now valid

    // arrp[3] and arrp[4] with malloc
    arrp[3] = (char *)malloc(10);
    strcpy(arrp[3], "March"); // Valid

    arrp[4] = (char *)malloc(10);
    printf("Enter last month: ");
    scanf("%9s", arrp[4]); // Valid

    // Printing results
    printf("\nArray of strings:\n");
    for (int i = 0; i < 3; i++)
        printf("arr[%d] = %s\n", i, arr[i]);

    printf("\nArray of pointers:\n");
    for (int i = 0; i < 5; i++)
        printf("arrp[%d] = %s\n", i, arrp[i]);

    // Free allocated memory
    free(arrp[2]);
    free(arrp[3]);
    free(arrp[4]);

    return 0;
}