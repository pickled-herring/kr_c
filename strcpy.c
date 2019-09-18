char*
strcpy(char *dst, const char *src)
{
	char *s = dst;
	while((*dst++ = *src++)!='\0')
		;
	return s;
}

#include <stdio.h>
int
main(void)
{
	char *s = "wallow bee way sydney\n";
	char d[123];

	strcpy(d,s);
	printf("%s\n", d);

	return 0;
}
