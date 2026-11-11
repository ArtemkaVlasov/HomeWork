#include <stdio.h>
#include <inttypes.h>
#include <limits.h>

#define N 10


int main(int argc, char **argv)
{
	float a[N] = {0};
	int j, k, max = INT_MIN, min = INT_MAX;
	for(int i = 0; i < N; i++)
	{
		scanf("%f", &a[i]);
	}
	for(int i = 0; i < N; i++)
	{
		if(max < a[i])
		{
			max = a[i];
			j = i;
		}
		if(min > a[i])
		{
			min = a[i];
			k = i;
		}
	}
	printf(" %d %d %d %d", (int)j+1,(int)max,(int)k+1,(int)min );
	return 0;
}

