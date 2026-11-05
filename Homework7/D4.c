#include <stdio.h>
#include <inttypes.h>

void print_num(int num);


int main(int argc, char **argv)
{
	uint64_t a;
	scanf("%"SCNu64, &a);
	print_num(a);
	return 0;
}

void print_num(int num) {
    if (num >= 10) {
        print_num(num / 10);
        printf(" %d", num % 10);
    } else {
        printf("%d", num);
    }
}
