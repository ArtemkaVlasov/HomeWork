#include <stdio.h>

#define N 5

int main(int argc, char **argv)
{
	int a[5][5];
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
		k += a[i][i];
	}
	printf("%d", k);
	return 0;
}

