#include <stdio.h>

int
main(void)
{
	int c;
	while((c = getchar()) != EOF){
		(void)putchar(c);
	}

	printf("%d\n", EOF);
	return 0;
}
