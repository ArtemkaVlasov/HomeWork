#include <stdio.h>
#include <inttypes.h>
#include <limits.h>

int max_find(int32_t max);


int main(int argc, char **argv)
{
	printf("%"PRId32, max_find(INT_MIN));
	return 0;
}

int max_find(int32_t max)
{
	int32_t a;
    scanf("%"SCNd32, &a);
	if(a == 0)
		return max;
	if(a > max)
	{
		max = a;
	}
	return max_find(max);
}
