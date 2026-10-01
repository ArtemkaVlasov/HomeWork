#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int16_t a, b, c, d, e;
	scanf("%"SCNd16 "%"SCNd16 "%"SCNd16 "%"SCNd16 "%"SCNd16, &a, &b, &c, &d, &e);
	(a<b) ? (a = c) : (b = c) ;
	(a<b) ? (a = d): (b = d);
	(a<b) ? (a = e) : (b = e) ;
	a<b ? printf("%d", b) : printf("%d", a); 
	return 0;
}

