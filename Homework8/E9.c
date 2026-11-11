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
	int x = a[N-1];
	for (int i = N-1; i > 0 ; i--) 
	{
        a[i] = a[i-1];
    }
    a[0] = x;

	for(int i = 0; i < N; i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}

