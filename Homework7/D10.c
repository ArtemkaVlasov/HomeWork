#include <stdio.h>
#include <inttypes.h>

void is_prime(int n, int delitel);

int main(int argc, char **argv)
{
	uint64_t a;
	scanf("%"SCNu64, &a);
	if(a == 1)
	{
		printf("NO");
		return 0;
	}
	is_prime(a, 2);
	return 0;
}

void is_prime(int n, int delitel)
{
	if(n == delitel)
	{
		printf("YES");
		return ;
	}
	if(n % delitel == 0 && n > delitel)
	{
		printf("NO");
		return;
	}

	is_prime(n, delitel+1);
}
