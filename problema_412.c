#include <stdio.h>
#include <math.h>

int test_1(int a,int b,int c)
{
  if((a+b > c) &&  (b+c > a) && (a+c > b))
    {
    return 1;
    }
    else{return 0;}
}

int test_2(int n) {
  //thats bad af ngl

  int p_max=-1;
  for(int i=n-1;i>=2;i--) {
    int prime=1;
    for(int j=2;j*j<=i;j++) {
      if(i%j==0) {
        prime=0;
        break;
      }
    }
    if(prime==1) {
      p_max=i;
    }
  }
  return p_max;
}

int test_3(int n,int k)
{    int c=n-k;
  int numarator=1,numitor=1,p=1,m=1;


for(int i=1;i<=n;i++){
  numarator*=i; //numaratorul
}
  for(int ii=1;ii<=k;ii++){
    p*=ii; // k ul de la numitor
  }
  for(int iii=1;iii<=c;iii++) {
  m*=iii;
  }
  numitor=p*m;
  return numarator/numitor ;
}

double test_4(int x) {
  double k=1;
  for(int i=1;i<=x;i++) {
    k+=1/(1+pow(i,2));
  }
  return k;
}


int main() {
  int test;
  printf("Introduceți valoarea testului (1, 2, 3 sau 4): ");
  scanf("%d", &test);

  if(test==1) {
    int a,b,c;
    scanf("%d\n %d\n %d\n",&a,&b,&c);
    int rezultat = test_1(a, b, c);
    printf("Rezultatul este: %d\n", rezultat);
  }
  if(test==2) {
  int n;
    scanf("%d",&n);
    int rezultat = test_2(n);
    printf("Rezultatul este: %d\n", rezultat);
  }
  if(test==3) {
    int n,k;
    scanf("%d\n %d\n",&n,&k);
    int rezultat = test_3(n, k);
    printf("Rezultatul pentru formula combinatorică este: %d\n", rezultat);
  }
  if(test==4) {
    int x;
    scanf("%d",&x);
    double rezultat = test_4(x);
    printf("Rezultatul este: %.2lf\n", rezultat);
  }
  return 0;
}