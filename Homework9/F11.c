#include <stdio.h>
#include <inttypes.h>


#define N 30

void f(int a[]);

int main(int argc, char **argv)
{
	int a[N] = {0};
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	f(a);
	return 0;
}

void f(int a[])
{
	int k = 0, l = 1;
	int64_t best_sum = a[k] + a[l];
	for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int64_t sum = (int64_t)a[i] + a[j];

            if (sum < best_sum)
            {
                best_sum = sum;
                k = i;
                l = j;
            }
        }
    }
    printf("%d %d", k, l);
}
