#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t a, b;
	while(1)
	{
		scanf("%"SCNd16, &a);
		if(a == 0)
		{
			break;
		}
		b++;
	}
	printf("%"PRId16, b);
	return 0;
}

