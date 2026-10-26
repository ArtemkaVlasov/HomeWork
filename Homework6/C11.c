#include <stdio.h>
#include <inttypes.h>

uint64_t nod(uint64_t a, uint64_t b);

int main(int argc, char **argv)
{
	uint64_t a, b;
	scanf("%"SCNu64 "%"SCNu64, &a, &b);
	printf("%"PRIu64, nod(a, b));
	return 0;
}

uint64_t nod(uint64_t a, uint64_t b)
{
	while(a != b)
	{
		if( a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return a;
}

