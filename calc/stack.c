#include <stdio.h>
#include <stdlib.h>

#define MAXVAL 100

static double stack[MAXVAL];
static int nstackp = 0;

void
push(double d)
{
	if (nstackp < MAXVAL)
		stack[nstackp++] = d;
	else{
		fprintf(stderr, "full stack\n");
		exit(12);
	}
}

double
pop(void)
{
	if (nstackp > 0)
		return stack[--nstackp];
	else{
		fprintf(stderr, "empty stack\n");
		exit(12);
	}
}
