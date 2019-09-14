#include <stdio.h>

int
main(void)
{
	int c, i, nother = 0;
	int ndigit[10];

	for(i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF){
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else
			++nother;
	}

	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", other = %d\n", nother);

	return 0;
}
