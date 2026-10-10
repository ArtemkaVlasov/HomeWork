#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int64_t a, b, c = 0, d = 0;
	scanf("%"SCNd64, &a);
	while(a > 0)
	{
		b = a % 10;
		a /= 10;
		if(b % 2 == 0)
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	printf("%"PRId64 " %"PRId64, c, d);
	return 0;
}

