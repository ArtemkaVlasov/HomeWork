#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int64_t a, b, c;
	scanf("%"SCNd64, &a);
	while(a > 0)
	{
		b = a % 10;
		a /= 10;
		c = a % 10;
		if(b <= c)
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}

