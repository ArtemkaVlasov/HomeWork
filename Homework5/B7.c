#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int64_t a, b, c, d;
	scanf("%"SCNd64, &a);
	while(a > 0)
	{
		b = a % 10;
		a /= 10;
		d = a;
		while(d > 0)
		{
			c = d % 10;
			if(b == c)
			{
				printf("YES");
				return 0;
			}
			d /= 10;
		}
	}
	printf("NO");
	return 0;
}

