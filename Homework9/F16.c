#include <stdio.h>

int main(int argc, char **argv)
{
	char a[2];
	scanf("%s", a);
	if(a[0] % 2 == 1)
	{
		if(a[1] % 2 == 1)
		{
			printf("BLACK");
			return 0;
		}
		printf("WHITE");
		return 0;
	}
	else
	{
		if(a[1] % 2 == 1)
		{
			printf("WHITE");
			return 0;
		}
		printf("BLACK");
	}
	return 0;
}

