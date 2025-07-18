/*E9.24*/
#include<stdio.h>
void func(int *a);
int main(void)
{
    int arr[10];
    func(arr);
    return 0;
}
void func(int *a)
{
    int *b, x = 5;
    a = &x;  // ok
    b = &x;  // ok
}