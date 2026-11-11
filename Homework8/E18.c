#include <stdio.h>
#include <inttypes.h>

#define N 10


int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	for(int i = 2; i < N; i++)
	{
		int count = 0;
		int x = a;
		while(x >= 2)
		{
			if(x % i == 0)
			{
				count++;
			}
			x--;
		}
		printf("%d %d \n", i, count);
	}
	return 0;
}

