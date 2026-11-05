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
	if(a == 0)
	{
		printf("0");
		return;
	}
		
	f(a/2);
	printf("%"PRId16, a%2);
}
