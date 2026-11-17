#include <stdio.h>
void sort_even_odd(int n, int a[]);

int main(int argc, char **argv)
{
	int a[20] = {0};
	for(int i = 0; i < 20; i++)
	{
		scanf("%d", &a[i]);
	}
	sort_even_odd(20, a);
	return 0;
}

void sort_even_odd(int n, int a[])
{
	int tmp[n];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            tmp[k++] = a[i];
		}
	}
    for (int i = 0; i < n; i++)
    {
		if (a[i] % 2 != 0)
		{
            tmp[k++] = a[i];
		}
	}
        

    for(int i = 0; i < n; i++)
    {
		a[i] = tmp[i];
	}

}
