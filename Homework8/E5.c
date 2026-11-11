#include <stdio.h>
#include <inttypes.h>

#define N 10


int main(int argc, char **argv)
{
	int a[N] = {0};
	int x = 0;
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < N; i++)
	{
		if(a[i] > 0)
			x += a[i];
	}
	printf("%d", x);
	return 0;
}

