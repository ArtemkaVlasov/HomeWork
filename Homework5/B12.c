#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int64_t a, b, min = 99, max = 0;
	scanf("%"SCNd64, &a);
	while(a > 0)
	{
		b = a % 10;
		a /= 10;
		if(max <= b)
		{
			max = b;
		}
		if(min >= b)
		{
			min = b;
		}
	}
	printf("%"PRId64 " %"PRId64, min, max);
	return 0;
}

