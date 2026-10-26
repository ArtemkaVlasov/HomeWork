#include <stdio.h>
#include <inttypes.h>

int sumi(int16_t a);

int main(int argc, char **argv)
{
	int16_t a;
	scanf("%"SCNd16, &a);
	sumi(a) % 2 == 0 ? printf("YES") : printf("NO");
	return 0;
}

int sumi(int16_t a)
{
	int16_t i = 0;
	while(a > 0)
	{
		i += a % 10;
		a /= 10;
	}
	return i;
	
}

