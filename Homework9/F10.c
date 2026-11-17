#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	char c = getchar(), k = c;

	for (; c != '.'; c = getchar(), i++)
	{
		if (k != c)
		{
			printf("%c%d", k, i);
			i = 0;
			k = c;
		}
	}

	if (k != '.')
		printf("%c%d", k, i);
	return 0;
}

