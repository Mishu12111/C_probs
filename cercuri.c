#include <math.h>
#include <stdio.h>

// no needed for optimisation!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// Ce zice tot textul acela anevoios? Practic ai o variabila 'test ' care ia valorile 1, 2 sau 3
// Iar pentru fiecare valoare vrea altceva
// cand 'test' este 1 vrea sa citesti si sa afisezi 6 variabile
// cand 'test' este 2 vrea sa citesti 6 valori, sa calculezi distanta dintre raze cu formula aceea cu radical
// apoi sa afisezi 1 sau 0 daca distanta este mai mica decat suma razelor
// cand 'test' este 3 vrea cam acelasi lucru numai ca in acest moment compari o raza cu suma dintre distanta
// si cealalata raza

int main() {
    int test;
    double r1, x1, y1, r2, x2, y2, dis;  // declaram cele 6 variabile si distanta

    // Citim valoarea 'test'
    scanf("%d", &test);

    // Citim datele pentru cele 2 cercuri
    scanf("%lf %lf %lf", &r1, &x1, &y1);  // Citim raza si coordonatele primului cerc
    scanf("%lf %lf %lf", &r2, &x2, &y2);  // Citim raza si coordonatele celui de-al doilea cerc

    if (test == 1) {  // daca 'test' este 1
        // Aici citim si afisam cele 6 variabile
        printf("Valori primul cerc: Raza, X, Y: %lf, %lf, %lf\n", r1, x1, y1);
        printf("Valori al doilea cerc: Raza, X, Y: %lf, %lf, %lf\n", r2, x2, y2);
    }

    if (test == 2) {  // daca 'test' este 2
        // Calculam distanta dintre centrele cercurilor
        dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));  // formula distanta Euclidiana
        // Verificam daca cercurile se intersecteaza
        if (dis <= r1 + r2) {
            printf("1\n");  // Cercurile se intersecteaza
        } else {
            printf("0\n");  // Cercurile nu se intersecteaza
        }
    }

    if (test == 3) {  // daca 'test' este 3
        // Calculam distanta dintre centrele cercurilor
        dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));  // formula distanta Euclidiana
        // Verificam daca primul cerc contine al doilea
        if (r1 >= r2 + dis) {
            printf("1\n");  // Cercul p contine cercul q
        } else {
            printf("0\n");  // Cercul p nu contine cercul q
        }
    }

    return 0;
}
