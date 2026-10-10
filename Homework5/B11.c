#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int64_t a, b, c = 0, d = 0, e = 0;
	scanf("%"SCNd64, &a);
	d = a;
	while(d > 0)
	{
		e++;
		d /= 10;
	}
	d = 0;
	while(a > 0)
	{
		b = a % 10;
		a /= 10;
		c = b;
		for(int i = 1; i < e ; i++)
		{
			c *= 10;
		}
		d += c;
		e--;
	}
	printf("%"PRId64, d);
	return 0;
}

