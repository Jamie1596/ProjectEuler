#include <stdio.h>

int sum(int x)
{
	int y, z;
	z = 999 / x;
	y = x + (z * x);
	y = (y * z) / 2;
	return y;
}

int main()
{
	int a = 3, b = 5, c = 15, result;
	result = sum(a) + sum(b) - sum(c);
	printf("%d\n", result);
	return 0;
}