#include <stdio.h>
#include <inttypes.h>

void print_simple(int n);

int main(int argc, char **argv)
{
	int16_t a;
	scanf("%"SCNd16, &a);
	print_simple(a);
	return 0;
}

void print_simple(int n)
{
	for(int i = 2; i <= n; i++)
	{
		if(n % i == 0)
		{
			printf("%d ", i);
			print_simple(n / i);
			return;
		}
	}
}

