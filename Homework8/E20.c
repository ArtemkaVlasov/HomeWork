#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int k = 0, x = 0, _;
	scanf("%d", &x);
	_ = x;
	while(_ > 0)
	{
		_ /= 10;
		k++;
	}
	int a[k];
	for(int i = 0; i < k; i++)
	{
		a[i] = x % 10;
		x /=10;
	}
	for (int i = 0; i < k - 1; i++) 
	{
        for (int j = 0; j < k - 1 - i; j++) 
        {
            if (a[j] < a[j + 1]) 
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
	for(int i = 0; i < k; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}

