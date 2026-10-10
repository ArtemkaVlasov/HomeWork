#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int64_t a, b;
	scanf("%"SCNd64, &a);
	while(a > 0)
	{
		b = a % 10;
		if(b % 2 != 0)
		{
			printf("NO");
			return 0;
		}
		a /= 10;
	}
	printf("YES");
	return 0;
}

