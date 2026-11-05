#include <stdio.h>
#include <inttypes.h>

int f(uint64_t a);

int main(int argc, char **argv)
{
	uint64_t a;
	scanf("%"SCNu64, &a);
	if(a == 0)
	{
		printf("0");
		return 0;
	}
	f(a);
	return 0;
}

int f(uint64_t a)
{
	if(a <= 0)
		return 0;
	printf(" %"PRIu64, a % 10);
	a /= 10;
	return f(a);
}
