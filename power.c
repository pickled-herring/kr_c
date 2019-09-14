#include <stdio.h>

static int power(int base, int n);

int
main(void)
{
	int i;
	printf("%7s %7s %9s\n", "int i", "power 2", "power -3");

	for(i = 0; i < 9; i++)
		printf("%7d %7d %9d\n", i, power(2, i), power(-3, i));

	return 0;
}

 static int
power(int base, int n)
{
	int i, p=1;

	for(i = 0; i < n; ++i)
		p *= base;
	return p;
}
