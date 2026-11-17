#include <stdio.h>

int sum_between_ab(int from, int to, int size, int a[]);

int main(int argc, char **argv)
{
	
	return 0;
}

int sum_between_ab(int from, int to, int size, int a[])
{
	if(from > to)
	{
		int t = from;
		from = to;
		to = t;
	}
	int j = 0;
	for(int i = 0; i < size; i++)
	{
		if(a[i] >= from && a[i] <= to)
		{
			j += a[i];
		}
	}
	return j;
}
