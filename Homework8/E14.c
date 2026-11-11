#include <stdio.h>

#define N 10

int main(int argc, char **argv)
{
	int a[N] = {0};
	int x[N] = {0};
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < N; i++)
	{
		int d = a[i];
		for(int j = i + 1; j < N; j++)
		{
			if(d == a[j])
			{
				for(int l = 0; l < N; l++)
				{
					if(x[l] == d)
					{
						goto restart;
					}
				}
				x[i] = d;	
			}
		}
		restart: d = a[i];
	}
	for(int i = 0; i < N; i++)
	{
		if(x[i] != 0)
		{
			printf(" %d", x[i]);
		}
	}
	return 0;
}

