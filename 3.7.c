#include <stdio.h>

int main()
{
    for(int a = 0; a < 1000; a++)
        for(int b = a+1; b < 1000; b++)
            for(int c = b+1; c < 1000; c++)
                if((a + b + c) == 1000 && (a*a) + (b*b) == (c*c)) {
                    printf("%d\n%d\n%d\n", a, b, c); // va returna valorile lui a, b si c
                    printf("%d\n", a * b * c); // va returna produsul lui a, b si c
                    return 0;
                }
                    
    return 0;
}
