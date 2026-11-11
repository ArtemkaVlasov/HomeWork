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
	for (int i = 0; i < N / 4; i++) 
	{
        int t = a[i];
        a[i] = a[N/2 - 1 - i];
        a[N/2 - 1 - i] = t;
    }

    for (int i = 0; i < N / 4; i++) 
    {
        int t = a[N/2 + i];
        a[N/2 + i] = a[N - 1 - i];
        a[N - 1 - i] = t;
    }
	for(int i = 0; i < N; i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}

