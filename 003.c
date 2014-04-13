#include <stdio.h>

int pfactor(long n, int x)
{
	if (n % x == 0)
		return pfactor(n/x, 2);
	else if (x >= n/2)
		return n;
	else
		return pfactor(n, ++x);
}

int main()
{
	long n = 600851475143;
	n = pfactor(n, 2);
	printf("%lu\n", n);
	return 0;
}