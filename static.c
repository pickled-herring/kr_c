#include <stdio.h>

static int something;

int
main(void)
{
#define SOMETHING(X) something=(X); \
                     printf("%d\n",something);

	SOMETHING(1);
	SOMETHING(3);
	return 0;
}
