#include <stdio.h>
#include <inttypes.h>

#define N 1000

int missing_number(int a[], int n);


int main(int argc, char **argv)
{
	int a[N] = {0};
	int k = 0;
	for(int i = 0; i < N; i++)
	{
		k += scanf("%d", &a[i]);
		if(a[i] == 0)
			break;
	}
	k--;
	printf("%d", missing_number(a, k));
	return 0;
}

int missing_number(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t  = a[j];
                a[j]   = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] + 1 != a[i + 1])
            return a[i] + 1;
    }

    return 0;
}
