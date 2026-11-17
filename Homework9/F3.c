#include <stdio.h>

#define N 1001

void f(char s[])
{
    int x[N] = {0};
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        x[count] = s[i] - '0';
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                int t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < count; )
    {
        int digit = x[i];
        int k = 0;

        while (i < count && x[i] == digit)
        {
            k++;
            i++;
        }

        printf("%d %d\n", digit, k);
    }
}

int main(void)
{
    char s[N];

    if (scanf("%1000s", s) != 1)
        return 0;

    f(s);

    return 0;
}
