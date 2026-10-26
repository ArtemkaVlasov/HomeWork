#include <stdio.h>
#include <inttypes.h>

int f(int n);

int main(int argc, char **argv)
{
	int16_t a;
	scanf("%"SCNd16, &a);
	printf("%d", f(a));
	return 0;
}

int f(int n)
{
	return n==0 ? 1 : n*f(n - 1);
}

