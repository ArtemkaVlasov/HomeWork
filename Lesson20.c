#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t a, b, c;
	scanf("%"SCNd16 "%"SCNd16 "%"SCNd16, &a, &b, &c);
	if((a+b) > c && (a+c) > b && (b + c) > a)
	{
		printf("YES");
		return 0;
	}
	printf("NO");
	return 0;
}

