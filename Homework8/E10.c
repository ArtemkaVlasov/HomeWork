#include <stdio.h>
#include <inttypes.h>

#define N 12


int main(int argc, char **argv)
{
	int a[N] = {0};
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	int x[4] = {a[N-4],a[N-3], a[N-2], a[N-1]};
	for(int i = N-1; i > 0 ; i--) 
	{
        a[i] = a[i-4];
    }
    for(int i = 0; i < 4; i++)
    {
		a[i] = x[i];
	}

	for(int i = 0; i < N; i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}

