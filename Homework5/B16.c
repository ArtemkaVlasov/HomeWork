#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int32_t a, b;
	scanf("%"SCNd32 "%"SCNd32, &a, &b);
	while(a != b)
	{
		if( a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	printf("%"PRId32, a);
	return 0;
}

