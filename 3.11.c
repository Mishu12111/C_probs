#include <stdio.h>

int main()
{
    // acu intrebarea e de ce unsigned long long, e pentru ca la un moment dat numarul poate sa sara la valori ff mari in cazul in care sa zicem introduci 5321 la x
    unsigned long long x;
    scanf("%llu", &x);
    unsigned long long lMax = 0;
    unsigned long long max = 0;
    
    for(unsigned long long i = 1; i < x; i++) {
        unsigned long long lungimeLant = 1;
        unsigned long long a = i;
        while(a != 1) {
            /*
            Bit manipulation approach pentru inmultiri si impartiri:

            De tinut cont pentru viitor:

            a >> i = a * 2^i -> a inmultit cu 2 la puterea i
            a << i = a / 2^i -> a impartit cu 2 la puterea i
            
            if(a % 2 == 0)
                a >>= 1; 
            else
                a = a + (a << 1) + 1;
            */

            if(a % 2 == 0)
                a *= 2;
            else
                a = 3 * a + 1;
            
            lungimeLant++;
        }
        
        if(lungimeLant > lMax) {
            lMax = lungimeLant;
            max = i;
        }
    }
    
    printf("%llu %d", max, lMax);
    
    return 0;
}
