#include <stdio.h>

int
main(void)
{
	char s[128];
	while(scanf("%s", s) != EOF)
		printf("%12s\n", s);

	return 0;
}
