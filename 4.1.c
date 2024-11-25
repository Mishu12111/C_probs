#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int m,n;

    scanf("%d", &m); //citim prima dimensiune
    getchar();
    /*
    getchar() este folosit pentru a consuma orice caracter rămas în buffer, cum ar fi \n, care poate afecta
    citirea ulterioară.  Este important să consumăm newline-ul când citim un număr și apoi un șir, pentru
    a ne asigura că citirea șirului se face corect

    Practic,cand citim numere,apoi un sir,este bine sa scriem getchar(); dupa citirea numarului sa anuntam
    calculatorul ca vrem apoi sa citim un sir. Daca nu,se emotioneaza si nu citeste bine
    */

    char* s = (char*)malloc(m * sizeof(char)); //initializam sirul cu dimensiunea initiala
    scanf("%[^\n]", s); //citim sirul

    scanf("%d", &n);// citim ce a de-a doua dimensiune
    char* temp = (char*)malloc(n * sizeof(char)); //initializam sirul temp pentru memorarea temporara a caracterelor suplimentare
    getchar();
    s=(char*)realloc(s,(m+n)*sizeof(char)); // realocam memoriea lui s ca fiind m+n,cu ajutorul comenzii 'realloc'

    scanf("%[^\n]", temp); // citim sirul temporar

    strcat(s,temp);//concatenam sirurile(unim sirurile)(concatenat=unit)

    printf("%s",s);
/*
 Pnetru citirea sirurilor si eficienta puteam folosi si comanda fgets() insa am preferat sa folosesc scanf
 caci este mai generala
 Apare probabil o notiune noua,acel %[^\n]
Ce face si de unde a aparut? ei bine haideti sa o luam mai de la inceput:
cu %c citim un SINGUR caracter
cu %s citim un SINGUR cuvant,practic daca am avea mai multe cuvinte separate prin spatii,nu s-ar face citirea bine
cu  %[^\n] putem citi o propozitie fara probleme(propozitie= mai multe cuvinte separate printr-un spatiu)
    */
    free(s);
    free(temp);
    return 0;
}

