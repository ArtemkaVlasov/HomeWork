#include <stdio.h>
#include <inttypes.h>

void sum_digits(int n);
int64_t b = 0;
int main(int argc, char **argv)
{
	int64_t a;
	scanf("%"SCNd64, &a);
	sum_digits(a);
	printf("%"PRId64, b);
	return 0;
}

void sum_digits(int n)
{
	if(n == 0)
		return;
	b += n % 10;
	sum_digits(n / 10);
}
