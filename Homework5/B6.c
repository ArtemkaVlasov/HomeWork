#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int64_t a, b, c;
	scanf("%"SCNd64, &a);
	if(a == 0)
	{
		printf("NO");
		return 0;
	}
	while(b != c)
	{
		b = (a % 10);
		a /= 10;
		c = (a % 10);
		if(a == 0) break;
	}
	if(b == c)
	{
		printf("YES");
		return 0;
	}
	printf("NO");
	return 0;
}

