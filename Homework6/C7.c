#include <stdio.h>
#include <inttypes.h>

void to_base(int n, int p, char *out) {
    if (n == 0) {
        out[0] = '0';
        out[1] = '\0';
        return;
    }

    char tmp[64];
    int  i = 0;

    while (n > 0) {
        tmp[i++] = (char)('0' + n % p);
        n /= p;
    }

    for (int j = 0; j < i; j++)
        out[j] = tmp[i - 1 - j];
    out[i] = '\0';
}

int main(int argc, char **argv) {
    int n, p;
    if (scanf("%d %d", &n, &p) != 2) return 1;

    char buf[64];
    to_base(n, p, buf);

    printf("%s\n", buf);
    return 0;
}

