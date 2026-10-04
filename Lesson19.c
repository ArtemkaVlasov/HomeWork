#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t a, b;
	scanf("%"SCNd16 "%"SCNd16, &a, &b);
	if(a > b)
	{
		printf("Above");
		return 0;
	}
	else if(a < b)
	{
		printf("Less");
		return 0;
	}
	printf("Equal");
	return 0;
}

