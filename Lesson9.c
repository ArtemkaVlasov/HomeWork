#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t a, b, c;
	scanf("%"SCNd16 "%"SCNd16 "%"SCNd16, &a, &b, &c);
	a<b ? b<c ? printf("%" PRId16, c) : printf("%" PRId16, b) : a<c ? printf("%" PRId16, c) : printf("%" PRId16, a);
	return 0;
}

