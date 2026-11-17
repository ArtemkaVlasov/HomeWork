#include <stdio.h>
#include <limits.h>

void change_max_min(int size, int a[]);

int main(int argc, char **argv)
{
	
	return 0;
}

void change_max_min(int size, int a[])
{
	int max = INT_MIN, min = INT_MAX, maxX, minY;
	for(int i = 0; i < size; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
			maxX = i;
		}
		if(a[i] < min)
		{
			min = a[i];
			minY = i;
		}
	}
	a[minY] = max;
	a[maxX] = min;
}
