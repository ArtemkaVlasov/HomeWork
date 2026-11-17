#include <stdio.h>
#include <limits.h>

void swap_negmax_last(int size, int a[]);
int main(int argc, char **argv)
{
	
	return 0;
}

void swap_negmax_last(int size, int a[])
{
	int k = INT_MIN;
	int j = -1;
	for(int i = 0; i < size; i++)
	{
		if(k < a[i] && a[i] < 0)
		{
			k = a[i];
			j = i;
		}
	}
	if(j != -1)
	{
		int _ = a[size - 1];
		a[size - 1] = k;
		a[j] = _;
	}
}
