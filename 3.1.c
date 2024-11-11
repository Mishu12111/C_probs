#include <stdio.h>

int main(){

    struct CIVILIZATIE{
        char Muncitori[][4]={'fermieri','','C','D'};
        char prenume[256];
        int varsta;
        char gen[9];
    };

    struct PERSOANA persoana_noua;
    printf("Introduceți numele persoanei: ");
    scanf("%[^\n]%*c", persoana_noua.nume);
    printf("Introduceți prenumele persoanei: ");
    scanf("%[^\n]%*c", persoana_noua.prenume);
    printf("Introduceți varsta persoanei: ");
    scanf("%d", &persoana_noua.varsta);
    printf("Introduceți genul persoanei: ");
    scanf("%s", persoana_noua.gen);
    printf("Ati introdus persoana %s %s, %d, %s\n", persoana_noua.nume,
    persoana_noua.prenume, persoana_noua.varsta, persoana_noua.gen);
    return 0;
}