#include <stdio.h>

int is_digit(char c);

int main(int argc, char **argv)
{
	int a = 0;
	char c = getchar();
	if(c == ')')
		{
			printf("NO");
			return 0;
		}
	while(c != '.')
	{
		a += is_digit(c);
		c = getchar();
	}
	if(a != 0) 
	{
		printf("NO");
		return 0;
	}
	printf("YES");
	return 0;
}

int is_digit(char c)
{
	if(c == '(')
	{
		return 1;
	}
	else if(c == ')')
	{
		return -1;
	}
	return 0;
}
