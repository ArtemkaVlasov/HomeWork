#include <stdio.h>
#include <inttypes.h>

int middle(int a, int b);

int main(int argc, char **argv)
{
	int32_t a, b;
	scanf("%"SCNd32 "%"SCNd32, &a, &b);
	printf("%d", middle(a, b));
	return 0;
}

int middle(int a, int b) 
{
	return (a + b) / 2;
}


