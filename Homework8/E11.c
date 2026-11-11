#include <stdio.h>

#define N 10


int main(int argc, char **argv)
{
	int a[N] = {0};
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < N - 1; i++) 
	{
        for (int j = 0; j < N - 1 - i; j++) 
        {
            if ((a[j] % 10) > (a[j + 1] % 10)) 
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
	for(int i = 0; i < N; i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}

