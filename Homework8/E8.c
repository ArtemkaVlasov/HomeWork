#include <stdio.h>
#include <inttypes.h>

#define N 12
#define P 3


int main(int argc, char **argv)
{
	int a[N] = {0};
	int x[N] = {0};
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < N / P; i++) 
	{
        x[i] = a[P - i];
        x[N/P + i] = a[N/P * 2 - i - 1];
        x[N/P * 2 + i] = a[N - 1 - i];
    }
	for(int i = 0; i < N; i++)
	{
		printf(" %d", x[i]);
	}
	return 0;
}

