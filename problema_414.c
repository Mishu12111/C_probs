#include <math.h>
#include <stdio.h>

double test_1(int a,int b,int c){
  double d;
  d =(a+b+c)/3;
  return d;
}



int prime(int n) {
    if (n <= 1) {
        return 0; // 0 și 1 nu sunt prime
    }
    for (int i = 2; i * i <= n; i++) { // verificăm până la rădăcina lui n
        if (n % i == 0) {
            return 0; // numărul nu este prim
        }
    }
    return 1; // numărul este prim
}
int test_3(int x) {
    int y;
    if(x==0) {
        y=-x+3;
    }
    else if(x>=1 &&x<=4) {
        y=3;
    }
    else if(x>4) {
        y=3*x-9;
    }
    else{printf("X NU apartine domeniului definitie!\n");}
    return y;
}
int test_4(int n) {
    int sum=0;
    for(int i =n-1; i>=1; i--) {
        if((i%3==0) || (i%5==0)) {
            sum+=i;
        }
    }
    return sum;
}
int main() {
    int test;
    scanf("%d", &test);
    if(test==1) {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        printf("%.4lf",test_1(a,b,c));
    }
    if (test == 2) {
        int m, sum = 0;
        scanf("%d", &m);
        for (int i = 1; i <= m; i++) {
            if (prime(i)) {
                sum += i;
            }
        }
        printf("Suma numerelor prime până la %d este: %d\n", m, sum); // Afișează suma
    }
    if (test == 3) {
        int x;
        scanf("%d", &x);
        printf("Rezultatul este: %d",test_3(x));
    }
    if (test == 4) {
        int m;
        scanf("%d", &m);
        printf("Rezultatul este: %d",test_4(m));
    }
    return 0;
}