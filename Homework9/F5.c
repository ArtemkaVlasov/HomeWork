#include <stdio.h>
int find_max_array(int size, int a[]);
int main(int argc, char **argv)
{
	
	return 0;
}

int find_max_array(int size, int a[])
{
	int x = a[0];
	for(int i = 0; i < size; i++)
	{
		if(x < a[i])
		{
			x = a[i];
		}
	}
	return x;
}
