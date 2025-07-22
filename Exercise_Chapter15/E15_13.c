/*E15.13*/
#include <stdio.h>

void func(int a[], const int b[], int c[]);

int main(void)
{
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    int c[] = {9, 10, 11, 12};
    func(a, b, c);
    printf("a[0] = %d, b[0] = %d, c[0] = %d\n", a[0], b[0], c[0]);
    return 0;
}

void func(int a[], const int b[], int c[])
{
    a[0]++;      // Modifies a[0]
    // b[0]++;   // ❌ Cannot modify because b is const
    c[0] += 5;   // Modify c[0]
}