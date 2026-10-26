#include <stdio.h>
#include <inttypes.h>

void sumequalmulty(int32_t a);

int main(int argc, char **argv)
{
	int32_t a;
	scanf("%"SCNd32, &a);
	sumequalmulty(a);
	return 0;
}

void sumequalmulty(int32_t a)
{
	int64_t b = 0, c = 1;
	while(a > 0)
	{
		b += (a % 10);
		c *= (a % 10);
		a /= 10;
	}
	if(b == c)
	{
		printf("YES");
		return;
	}
	printf("NO");
	return;
}
