#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t a, b;
	scanf("%"SCNd16 "%" SCNd16, &a, &b);
	printf("%"PRId16, a-b);
	
	return 0;
}

