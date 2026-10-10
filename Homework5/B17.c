#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
	int32_t a;
    
    scanf("%"SCNd32, &a);
    
    for (int i = 10; i <= a; i++) 
    {
        int b = 0, c = 1, d = i;
        
        while (d > 0) 
        {
            int e = d % 10;
            b += e;
            c *= e;
            d /= 10;
        }
        
        if (b == c) 
        {
            printf(" %d ", i);
        }
    }
    
    return 0;
}

