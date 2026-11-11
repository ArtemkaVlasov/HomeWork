#include <stdio.h>
#include <inttypes.h>

#define N 12


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
	printf("%.2f", x / N);
	return 0;
}

