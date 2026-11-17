#include <stdio.h>

#define N 10

int f(int a[], int size);

int main(int argc, char **argv)
{
	int a[N] = {0};
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	if(f(a, N))
	{
		for(int i = 0; i < N; i++)//48 31 20 61 97 12 18 100 200 123
		{
			if(a[i] % 2 != 0)
			{
				int k = 1;
				while(a[i] > 0)
				{
					if((a[i] % 10) % 2 != 0)
					{
						k *= (a[i] % 10);	
					}
					a[i] /= 10;
				}
				a[i] = k;
			}
		}
		for(int i = 0; i < N; i++)
		{
			printf("%d ", a[i]);
		}
		return 0;
	}
	else
	{
		for(int i = 0; i < N; i++)
		{
			if(a[i] % 2 == 0)
			{
				int k = 1;
				while(a[i] > 0)
				{
					if((a[i] % 10) % 2  == 0)
					{
						k *= (a[i] % 10);	
					}
					a[i] /= 10;
				}
				a[i] = k;
			}
		}
		for(int i = 0; i < N; i++)
		{
			printf("%d ", a[i]);
		}
	}
	return 0;
}

int f(int a[], int size)
{
	int k = 0;
	for(int i = 0; i < size; i++)
	{
		if(a[i] % 2 == 0)
			k++;
	}
	if(k > 5)
		return 1;
	return 0;
}
