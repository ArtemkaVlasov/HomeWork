#include <stdio.h>
#include <inttypes.h>

int f(uint64_t a);

int main(int argc, char **argv)
{
	uint64_t a;
	scanf("%"SCNu64, &a);
	printf("%"PRId32, f(a));
	return 0;
}

int f(uint64_t a) {
    if (a == 0) return 0;
    return (int)(a & 1ULL) + f(a >> 1);
}
