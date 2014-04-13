#include <stdio.h>

int fib(int x)
{
	if ((x == 1) || (x == 2))
		return x;
	else
		return (fib(x-1) + fib(x-2));
}

int main()
{
	int x = 2, n = 2, sum = 0;
	while (n <= 4000000) {
		sum += n;
		x += 3;
		n = fib(x);
	}
	printf("%d\n", sum);
	return 0;
}