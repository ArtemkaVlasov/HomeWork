#include <stdio.h>
#include <inttypes.h>

#define N 10


int main(int argc, char **argv)
{
	int x[N] = {0};
	int a, count = 0;
	scanf("%d", &a);
	while(a > 0)
	{
		x[count] = a % 10;
		a /= 10;
		count++;
	}
	for(int i = count - 1; i >= 0; i--)
	{
		printf("%d ", x[i]);
	}
	return 0;
}

