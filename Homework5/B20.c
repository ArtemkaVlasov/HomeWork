#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int32_t a;
	scanf("%"SCNd32, &a);
	if(a == 1)
	{
		printf("NO");
		return 0;
	}
	for(int i = 2; i < a / 2; i++)
	{
		if(a % i == 0)
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}

