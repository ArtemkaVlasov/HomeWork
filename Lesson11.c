#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t a, b, c, d, e;
	scanf("%"SCNd16 "%"SCNd16 "%"SCNd16 "%"SCNd16 "%"SCNd16, &a, &b, &c, &d, &e);
	(a<b) ? (b = c) : (a = c) ;
	(a<b) ? (b = d): (a = d);
	(a<b) ? (b = e) : (a = e) ;
	a<b ? printf("%d", a) : printf("%d", b); 
	return 0;
}

