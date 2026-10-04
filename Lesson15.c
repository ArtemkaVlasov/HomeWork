#include <stdio.h>
#include <inttypes.h>
int main(int argc, char **argv)
{
	int16_t a, max = 0;
	scanf("%"SCNd16, &a);
	max = (a % 10);
	max < (a / 100) ? (max = (a / 100)) : (max < ((a % 100) / 10) ? (max = ((a % 100) / 10)) : (max += 0));
	printf("%"PRId16, max);
	return 0;
}

