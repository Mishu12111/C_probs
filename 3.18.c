#include <stdio.h>
#define m 100
int sum=0;
int k=0;
int prime(int n) {
    for(int j = 2; j*j <= n; j++) {
        if(n % j == 0) {
            // oprim imediat executarea for-ului si returnam 1, pentru ca nu avem nevoie sa stim de cati divizori are numarul n
            return 1;
        }
    }
    return 0;
}
int sum_prime(int i,int n) {

    sum +=i;
    if( prime(sum) == 1 && sum < n) {
        k++;
        return sum;
    }
    return 0;
}
int main() {
    int n;
    int LA=0,LM=0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (prime(i)==1) {
            LA=sum_prime(i,n);
            printf("%d ",i);
            if(LM<LA && LA != 0) {
                LM=LA;
            }
        }
    }
    printf("Numarul Maxim:%d\n",LM);
    printf("Lungimea Maxima:%d\n",k);

    return 0;
}
