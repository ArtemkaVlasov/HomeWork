#include <stdio.h>
#include <inttypes.h>

void simple(int16_t);

int main(int argc, char **argv)
{
	int16_t a;
	scanf("%"SCNd16, &a);
	simple(a);
	return 0;
}

void simple(int16_t a)
{
	if(a == 1 || a == 0)
	{
		printf("NO");
		return;
	}
	for(int i = 2; i < a / 2; i++)
	{
		if(a % i == 0)
		{
			printf("NO");
			return;
		}
	}
	printf("YES");
	return;
}
