#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int32_t a,b, c = 0;
	scanf("%"SCNd32 "%"SCNd32, &a, &b);
	for(int i = a; i <=b; i++)
	{
		c += i*i;
	}
	printf("%"PRId16, c);
	return 0;
}

