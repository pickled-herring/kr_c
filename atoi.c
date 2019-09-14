#include <stdio.h>

static int atoi(const char *s);

int
main(void){
	printf(" %d\n", atoi("12"));
	printf(" %d\n", atoi("1123 23"));
	printf(" %d\n", atoi(""));
	printf(" %d\n", atoi("some"));
	return 0;
}

static int
atoi(const char *s)
{
	int i,n = 0;
	for(i =0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10*n + (int)(s[i] -'0');
	return n;
}
