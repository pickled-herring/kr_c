#include <stdio.h>

#define IN 0
#define OUT 1
int
main(void)
{
	int c, state = OUT;
	int nl, nw, nc;
	nl = nw = nc = 0;

	while((c = getchar()) != EOF){
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if(state == OUT){
			state = IN;
			++nw;
		}
	}

	printf("lines words chars\n");
	printf("%5d %5d %5d\n", nl, nw, nc);

	return 0;
}
