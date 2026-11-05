#include <stdio.h>
#include <inttypes.h>

void f(int32_t a, int32_t i);

int main(int argc, char **argv)
{
	int32_t a;
	scanf("%"SCNd32, &a);
	f(a, 2);
	
	return 0;
}

void f(int32_t a, int32_t i)
{
	if(a == 1)
		return ;
	if(a % i == 0)
	{
		printf(" %"PRId32, i);
		f(a/i, i);
		return;
	}
	f(a, ++i);
}
