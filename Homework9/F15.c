#include <stdio.h>
#include <limits.h>

int count_bigger_abs(int n, int a[]);

int main(int argc, char **argv)
{
	
	return 0;
}

int count_bigger_abs(int n, int a[])
{
	int j = 0, max = INT_MIN;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max)
			max = a[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
			if(a[i] * -1 > max)
				j++;
	}
	return j;
}
