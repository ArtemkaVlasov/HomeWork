#include <stdio.h>
#include <inttypes.h>

int sumN(int n);

int main(int argc, char **argv)
{
	int32_t a;
	scanf("%"SCNd32, &a);
	printf("%d", sumN(a));
	return 0;
}

int sumN(int n)
{
	int x = 0;
	for(int i = 1; i <= n; i++)
	{
		x += i;
	}
	return x;
}

