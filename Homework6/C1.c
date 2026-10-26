#include <stdio.h>
#include <inttypes.h>

int number(int a);

int main(int argc, char **argv)
{
	int32_t a;
	scanf("%"SCNd32, &a);
	printf("%d", number(a));
	return 0;
}

int number(int32_t a)
{
	if(a < 0)
		return a * -1;
	return a;
}
