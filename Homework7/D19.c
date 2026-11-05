#include <stdio.h>

int acounter(void);

int main(int argc, char **argv)
{
	printf("%d", acounter());
	return 0;
}

int acounter(void)
{
	static int a = 0;
	char c = getchar();
	if(c == 'a')
		a++;
	if(c == '.')
		return a;
	return acounter();
}
