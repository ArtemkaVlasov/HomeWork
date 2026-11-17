#include <stdio.h>
#include <limits.h>

#define N 10

int main(int argc, char **argv)
{
	int a[N][N];
	int k = 0;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			scanf("%d", &a[j][i]);
		}
	}
	for(int i = 0; i < N; i++)
	{
		int max = INT_MIN;
		for(int j = 0; j < N; j++)
		{
			if(a[j][i] > max)
				max = a[j][i];
		}
		k += max;
	}
	printf("%d", k);
	return 0;
}

