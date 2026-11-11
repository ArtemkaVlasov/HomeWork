#include <stdio.h>
#include <inttypes.h>
#include <limits.h>

#define N 5


int main(int argc, char **argv)
{
	float a[N] = {0};
	float x = INT_MAX;
	for(int i = 0; i < N; i++)
	{
		scanf("%f", &a[i]);
	}
	for(int i = 0; i < N; i++)
	{
		if(x > a[i])
			x = a[i];
	}
	printf("%d", (int)x);
	return 0;
}

