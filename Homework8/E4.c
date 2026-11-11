#include <stdio.h>
#include <inttypes.h>
#include <limits.h>

#define N 10


int main(int argc, char **argv)
{
	int a[N] = {0};
	int x = 0, k = N + 1, n = 0;
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < 2; i++)
	{
		x = INT_MIN;
		for(int j = 0; j < N; j++)
		{
			if(x < a[j] && k != j && i == 0)
			{
				x = a[j];
				k = j;
			}
			if(x < a[j] && k != j && i == 1)
			{
				x = a[j];
				n = j;
			}
		}
	}
	printf("%d", a[k] + a[n]);
	return 0;
}

