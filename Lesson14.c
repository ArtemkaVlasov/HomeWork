#include <stdio.h>
#include <inttypes.h>
int main(int argc, char **argv)
{
	int16_t a, sum = 1;
	scanf("%"SCNd16, &a);
	sum *= (a % 10);
	sum *= (a / 100);
	sum *= ((a % 100) / 10);
	printf("%"PRId16, sum);
	return 0;
}

