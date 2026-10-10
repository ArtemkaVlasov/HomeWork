#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t a,b;
	scanf("%"SCNd16 "%"SCNd16, &a, &b);
	for(int i = a; i <=b; i++)
	{
		printf("%d ", i*i);
	}
	return 0;
}

