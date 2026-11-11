#include <stdio.h>
#include <inttypes.h>

#define N 5


int main(int argc, char **argv)
{
	float a[N] = {0};
	float x = 0;
	for(int i = 0; i < N; i++)
	{
		scanf("%f", &a[i]);
	}
	for(int i = 0; i < N; i++)
	{
		x += a[i];
	}
	printf("%.3f", x / N);
	return 0;
}

