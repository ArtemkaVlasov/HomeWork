#include <stdio.h>
#include <inttypes.h>

int recurs_power(int n, int p);
int x;
int main(int argc, char **argv)
{
	int a, b;
	scanf("%d %d", &a, &b);
	x = a;
	if(b==0)
	{
		printf("1");
		return 0;
	}
	printf("%d", recurs_power(a, b));
	return 0;
}

int recurs_power(int n, int p)
{
	if(p == 1)
		return(n);
	return recurs_power(n*x, --p);
}
