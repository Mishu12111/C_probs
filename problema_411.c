#include <math.h>
#include <stdio.h>

int test_1(int a,int b,int k) {
    int prod=1;
    for(int i=a;i<=b;i++) {
        if(i%k==0) {
        prod*=i;
        }
    }
    return prod;
}
void prime(int n) {
    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
}
int test_3(char a) {
    int k=0;

    int list_1[5] = {65, 69, 73, 79, 85}; // A, E, I, O, U
    if(a>93) {
        a=a-32;
    }
    if(a>64 && a<91) {
        for(int i=a+1;i<=90;i++) {
            int voc=0;
            for(int j=0;j<5;j++) {
                if(i == list_1[j]) {
                    voc=1;
                    break;
                }
            }
            if(voc==0) {
            k++;
            }
        }
    }
    return k;
}
int test_4(int x,int y) {
    int x_fac=1,y_fac=1,dif;
    for(int i=1;i<=x;i++) {
        x_fac *=i;
    }
    for(int i=1;i<=y;i++) {
        y_fac *=i;
    }
    dif = abs(x_fac-y_fac);
    return dif;
}
int main() {
int test;
    scanf("%d",&test);
    if(test==1) {
        int a,b,k,rezultat;
        scanf("%d\n %d\n %d\n",&a,&b,&k);
        rezultat= test_1(a,b,k);
        printf("%d\n",rezultat);
    }
    if(test==2) {
        int n;
        scanf("%d", &n);
        printf("Factorii primi sunt: ");
        prime(n);
    }
    if(test==3) {
    char a;
        scanf("%c",&a);
        int rezultat=test_3(a);
        printf("%d\n",rezultat);
    }
    if(test==4) {
    int x,y;
        scanf("%d %d",&x,&y);
        int rezultat=test_4(x,y);
        printf("%d\n",rezultat);
    }
}