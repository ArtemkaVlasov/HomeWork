#include <stdio.h>
#include <inttypes.h>

void f(int16_t a);

int main(int argc, char **argv)
{
	int16_t a;
	scanf("%"SCNd16, &a);
	f(a);
	return 0;
}

void f(int16_t a)
{
	static int16_t i = 0;
	if(i == a)
		return;
	printf(" %"PRId16, ++i);
	f(a);
}
