#include <stdio.h>
#include <inttypes.h>

int is2pow(int32_t a);
int main(int argc, char **argv)
{
	int32_t a;
	scanf("%"SCNd32, &a);
	if(a == 1)
	{
		printf("YES");
		return 0;
	}
	if(is2pow(a) == 66)
	{
		printf("YES");
		return 0;
	}
	printf("NO");
	return 0;
}

int is2pow(int32_t a)
{
	if(a == 2)
	{
		return 66;
	}
	if(a <= 1)
		return 0;
	return is2pow(a>>1);
}
