#include <stdio.h>
#include <inttypes.h>

#define N 10


int main(int argc, char **argv)
{
	int a[N] = {0};
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	 for (int i = 0; i < N; i++) 
	 {
        int count = 0;
        for (int j = 0; j < N; j++) 
        {
            if (a[i] == a[j]) 
            {
                count++;
            }
        }
        if (count == 1) {
            printf("%d ", a[i]);
        }
    }
	return 0;
}

