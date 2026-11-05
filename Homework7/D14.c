#include <stdio.h>
#include <inttypes.h>

void f();

int main(int argc, char **argv)
{
	f();
	return 0;
}

void f()
{
	int16_t a;
	scanf("%"SCNd16, &a);
	if(a == 0)
		return;
	if(a % 2 != 0)
		printf(" %"PRId16, a);
	f();
}
