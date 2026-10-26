#include <stdio.h>

int main(int argc, char **argv)
{
	char c = getchar();
	do
	{
		if(c >= 'a' && c <= 'z')
		{
			putchar(c - 0x20);
		}
		else
		{
			putchar(c);
		}
		c = getchar();
	}
	while(c != '.');
	return 0;
}
