#include <stdio.h>

int
main(void)
{
	int i = 0, j = 1234;
	printf("(i = j): %d\n",(i=j));
	return 0;
}
