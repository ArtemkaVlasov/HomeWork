#include <stdio.h>
#include <inttypes.h>

int powint(int a, int b);


int main(int argc, char **argv)
{
	int32_t a, b;
	scanf("%"SCNd32 "%"SCNd32, &a, &b);
	printf("%d", powint(a, b));
	return 0;
}

int powint(int a, int b)
{
	int c = a;
	if(b == 0)
		return 1;
	for(int i = 1; i < b; i++)
	{
		a = a * c;
	}
	return a;
}

