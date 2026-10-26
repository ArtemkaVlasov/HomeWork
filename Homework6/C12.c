#include <stdio.h>

float sinus(float x) {
    double term = x;
    double sum = x;
    int n = 1;

    while ((term < 0 ? -term : term) >= 0.001) {
        term *= - (double)x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }

    return (float)sum;
}

int main(int argc, char **argv) {
    float deg;
    scanf("%f", &deg);

    const double PI = 3.1415;

    float rad = (float)(deg * PI / 180.0);

    printf("%.3f\n", sinus(rad));

    return 0;
}
