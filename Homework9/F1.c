#include <stdio.h>

void sort_array(int size, int a[]);

int main(int argc, char **argv)
{
	int a[20] = {0};
	for(int i = 0; i < 20; i++)
	{
		scanf("%d", &a[i]);
	}
	sort_array(20, a);
	return 0;
}

void sort_array(int size, int a[])
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size - i - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}
