#include <stdio.h>

#include "stack.h"
#define PI 3.14159763871022373

int
main(void)
{
	push(8.0);
	push(9.0);
	push(5.0);
	push(6.0);
	push(7.0);
	push(PI);
	printf(" something %6.2f %6.2f\n",pop(),pop());
	return 0;
}

