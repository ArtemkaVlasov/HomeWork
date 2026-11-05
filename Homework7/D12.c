#include <stdio.h>
#include <inttypes.h>

void f(int16_t a);

int main(int argc, char **argv)
{
	int16_t a;
	scanf("%"SCNd16, &a);
	f(a);
	return 0;
}

void f(int16_t a)
{
	static uint64_t i = 1;
	static int16_t x = 0;
	if(x >= a)
		return;
	for(int j = 0; j < i; j++)
	{
		if(x >= a)
			return;
		printf(" %"PRIu64, i);
		x++;
		
	}
	i++;
	f(a);
}
