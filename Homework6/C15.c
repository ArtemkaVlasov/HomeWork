#include <stdio.h>
#include <inttypes.h>

void poryadok(int16_t a);

int main(int argc, char **argv)
{
	int16_t a;
	scanf("%"SCNd16, &a);
	poryadok(a);
	
	return 0;
}

void poryadok(int16_t a)
{
	int16_t i;
	while(a > 0)
	{
		i = a % 10;
		a /= 10;
		if(a % 10 >= i)
		{
			printf("NO");
			return;
		}
	}
	printf("YES");
	return;
}
