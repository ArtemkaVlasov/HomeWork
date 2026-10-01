#include <stdio.h>
#include <inttypes.h>

int min(int16_t a, int16_t b, int16_t c, int16_t d, int16_t e);
int max(int16_t a, int16_t b, int16_t c, int16_t d, int16_t e);

int main(int argc, char **argv)
{
	int16_t a, b, c, d, e;
	scanf("%"SCNd16 "%"SCNd16 "%"SCNd16 "%"SCNd16 "%"SCNd16, &a, &b, &c, &d, &e);
	printf("%d", min(a, b, c, d, e) + max(a, b, c, d, e)); 
	return 0;
}
int min(int16_t a, int16_t b, int16_t c, int16_t d, int16_t e)
{
	(a<b) ? (b = c) : (a = c) ;
	(a<b) ? (b = d): (a = d);
	(a<b) ? (b = e) : (a = e) ;
	return a<b ? a : b;
}
int max(int16_t a, int16_t b, int16_t c, int16_t d, int16_t e)
{
	(a<b) ? (a = c) : (b = c) ;
	(a<b) ? (a = d): (b = d);
	(a<b) ? (a = e) : (b = e) ;
	return a<b ? b : a;
}
