#include <stdio.h>
#include <inttypes.h>

void f(int16_t a, int16_t b);

int main(int argc, char **argv)
{
	int16_t a, b;
	scanf("%"SCNd16 "%"SCNd16, &a, &b);
	f(a, b);
	printf(" %"PRId16, b);
	return 0;
}

void f(int16_t a, int16_t b)
{
	if(a > b)
	{
		printf(" %"PRId16, a--);
		f(a, b);
	}
	else if(a < b)
	{
		printf(" %"PRId16, a++);
		f(a, b);
	}
	return;
}
