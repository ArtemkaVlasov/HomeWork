#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t a;
	scanf("%"SCNd16, &a);
	if(99 < a && a <1000)
	{
		printf("YES");
		return 0;
	}
	printf("NO");
	return 0;
}

