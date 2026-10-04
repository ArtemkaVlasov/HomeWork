#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t a, b ,c;
	scanf("%"SCNd16 "%"SCNd16 "%"SCNd16, &a, &b, &c);
	if(a < b && b < c)
		printf("YES");
	else
		printf("NO");
	return 0;
}

