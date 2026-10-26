#include <stdio.h>
#include <inttypes.h>

uint64_t desk(int16_t n);

int main(int argc, char **argv)
{
	int16_t a;
	scanf("%"SCNd16, &a);
	printf("%"PRIu64, desk(a));
	return 0;
}

uint64_t desk(int16_t n)
{
	 return 1ULL << (n - 1);
}
