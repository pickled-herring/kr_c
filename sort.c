#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define MAX 100
//#define RADIX

int
stupid(const void *p1, const void *p2)
{
	return *(uint8_t*)(p1) - *(uint8_t*)(p2);
}

int
main(void)
{
	uint8_t a[] = {1,13,6,78,34,75,12,16,36,94,58,28,17};
	int i;
#ifdef RADIX
	uint8_t sort[MAX] = {0};

	for(i = 0; i < sizeof(a)/sizeof(uint8_t); i++)
		sort[a[i]]++;

	for(i = 0; i < sizeof(sort)/sizeof(uint8_t); i++){
		if(sort[i] != 0)
			printf("%d ", i);
	}
	printf("\n");

#else // Defined QSORT

	qsort(&a, sizeof(a), sizeof(uint8_t), stupid);
	for(i = 0; i < sizeof(a)/sizeof(uint8_t); i++)
		printf("%d ", a[i]);
	printf("\n");
#endif

	return 0;
}
