#include <stdio.h>

int is_digit(char c);

int main(int argc, char **argv)
{
	int a = 0;
	char c;
	while(c != '.')
	{
		a += is_digit(c);
		c = getchar();
	}
	printf("%d", a);
	return 0;
}

int is_digit(char c)
{
	if(c >= '0' && c <= '9')
	{
		return (c - 48);
	}
	return 0;
}
