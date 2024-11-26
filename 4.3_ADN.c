#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {


    int p=0,k;

    scanf("%d",&k);
    getchar();
    printf("Acesta este kaxscdgvy: %d \n",k);
    char *s=(char *)malloc(k*sizeof(char));

    if(s==NULL)
    {
        printf("Alocare gresita a memoriei");
        exit(1);

    }

    scanf("%s",s);


    if(k%2==1) {
        printf("Acesta este k: %d \n",k);
        printf("Secventierea este gresita! \n");
        exit(1);
    }
    else  {
        printf("Acesta este k: %d \n",k);

        printf("Secventierea este corecta! \n");

        for(int i=0;i<k/2;i++) {
            printf("Acesta este i: %d\n",i);
            printf("Acesta este s[i]: %c\n",s[i]);
            printf("Acesta este s[k/2+i]: %c\n",s[k/2+i]);
            printf("Acesta este p: %d\n",p);
            if(((s[i]=='A') && (s[k/2+i]=='T')) || ((s[i]=='T') && (s[k/2+i]=='A'))) {

                p++;

            }
            else if(((s[i]=='C') && (s[k/2+i]=='G'))|| ((s[i]=='G') && (s[k/2+i]=='C'))) {

                p++;
            }
            else{ printf("\n\nACEASTA ESTE INDEXUL LA CARE APARE EROAREA: %d\n\n",(i+1)); goto end;}
            // aici returnez i+1 deoarece pornesc cu i-ul de la 0 si in mod normal ar trebui inceput de la 1
            // se repoate scrie codul iar in fiecare for loop se face modificarea "int i=1;i<=k/2"

        }
        printf("Acesta este k/2: %d",k/2);
    }
    if (p == k / 2) {
        printf("Secventa ADN este valida\n");
        printf("0");
    } else {
        printf("Secventa ADN este invalida\n");
    }
    end:
    return 0;
}