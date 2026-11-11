#include <stdio.h>
#include <inttypes.h>

#define N 10


int main(int argc, char **argv)
{
	int a[N] = {0};
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	int j[N] = {0};
	for(int i = 0; i < N; i++)
	{
		j[i] = a[i];
	}
	for(int i = 0; i < N; i++) //40 105 203 1 14 1000 22 33 44 55
	{
		j[i] /= 10;
		if(j[i] % 10 == 0)
		{
			printf(" %d", a[i]);
		}
	}
	return 0;
}

