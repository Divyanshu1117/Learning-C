/*E6.10*/
#include <stdio.h>

int func(int x, int y); // return int

int main(void)
{
	int x;
	x = func(5, 6) + 100; // 5+6 = 11 → 11+100 = 111
	printf("%d\n", x);
	return 0;
}

int func(int x, int y)
{
	return x + y;
}