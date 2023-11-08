#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    printf("\n");

    int p = -1;
    while (p < 9)
    {
        ++p;
        int a = -1;
        while (a < 9)
        {
            ++a;
            int s = -1;
        
            while (s < 9)
            {
                ++s;
                int w = -1;
            
                while (w < 9)
                {
                    ++w;
                    printf("\n%d %d %d %d", p, a, s, w);
                }
            }
        }
    }

    printf("\n");
    printf("\n");

    return 0;
}