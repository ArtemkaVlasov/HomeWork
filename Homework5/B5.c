#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int64_t a, b = 0;
	scanf("%"SCNd64, &a);
	while(a > 0)
	{
		b += (a % 10);
		a /= 10;
	}
	printf("%"PRId64, b);
	return 0;
}

