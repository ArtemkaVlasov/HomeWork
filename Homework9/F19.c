#include <stdio.h>

#define N 5

int f(int a[][N], int size);

int main(int argc, char **argv)
{
	int a[N][N];
	int k;
	int n = 0;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			scanf("%d", &a[j][i]);
		}
	}
	k = f(a, N);
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(a[i][j] > k)
			{
				n++;
			}
		}
	}
	printf("%d", n);
	return 0;
}

int f(int a[][N], int size)
{
	int k = 0;
	for(int i = 0; i < N; i++)
	{
		k += a[i][i];
	}
	return k / N;
}
