#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int
main(void)
{
	int fahr;

	printf("%6s %6s\n","cel","fahr");
	for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%6d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	return 0;
}
