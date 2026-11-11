#include <stdio.h>
#include <inttypes.h>

#define N 10


int main(int argc, char **argv)
{
	int a[N] = {0};
	int x[N] = {0};
	int j[N] = {0};
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < N; i++)
	{
		if(a[i] > 0)
		{
			x[i] = a[i];
		}
		else
		{
			j[i] = a[i];
		}
	}
	for(int i = 0; i < 2; i++)
	{
		for(int k = 0; k < N; k++)
		{
			if(i == 0 && x[k] != 0)
			{
				printf(" %d", x[k]);
			}
			else if(i == 1 && j[k] != 0)
			{
				printf(" %d", j[k]);
			}
		}
	}
	return 0;
}

