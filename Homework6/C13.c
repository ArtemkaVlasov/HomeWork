#include <stdio.h>
#include <math.h>

float cosinus(float x)
{
    const float eps = 0.001f;
    float term = 1.0f;
    float sum = 1.0f;
    int n = 1;

    do {
        term *= -x * x / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    } while (fabsf(term) >= eps);

    return sum;
}

int main(int argc, char **argv)
{
    int degrees;
    const double PI = 3.1415;

    if (scanf("%d", &degrees) != 1)
        return 1;

    float radians = degrees * PI / 180.0f;

    printf("%.3f\n", cosinus(radians));

    return 0;
}
