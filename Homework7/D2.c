#include <stdio.h>
#include <inttypes.h>

int f(int16_t a);

int main(int argc, char **argv)
{
	int16_t a;
	scanf("%"SCNd16, &a);
	printf("%d", f(a));
	return 0;
}

int f(int16_t a)
{
	if(a == 1)
		return a;
	return a + f(a-1);
}
