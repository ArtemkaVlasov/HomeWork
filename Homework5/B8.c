#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int64_t a, b, c = 0;
	scanf("%"SCNd64, &a);
	while(a > 0)
	{
		b = a % 10;
		if(b == 9)
			c++;
		a /= 10;
	}
	if(c == 1)
	{
		printf("YES");
		return 0;
	}
	printf("NO");
	return 0;
}

