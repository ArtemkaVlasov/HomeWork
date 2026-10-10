#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t a, b = 1, c = 0, d;
	scanf("%"SCNd16, &a);
	for(int i = 0; i < a; i++)
	{
		printf("% "PRId16, b);
		d = b + c;
		c = b;
		b = d;
	}
	return 0;
}

