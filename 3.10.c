#include <stdio.h>
int main() {
    int n,k=0,s=0,p,r;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s += (i*i);
        k +=i;
    }
    p=k*k;
    r=p-s;
    printf("%d",r);
}
