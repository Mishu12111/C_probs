#include <math.h>
#include <stdio.h>
// no needed for optimisation!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// Ce zice tot textul acela anevoios? Practic ai o variabila 'test ' care ia valorile 1,2 sau 3
// Iar pentru fiecare valoare vrea altceva
// cand 'test' este 1 vrea sa citesti si sa afisezi 6 variabile
// cand 'test' este 2 vrea sa citesti 6 valori,sa calculezi distanta dintre raze cu formula aceea cu radical
// apoi sa afisezi 1 sau 0 daca distanta este mai mica decat suma razelor
// cand 'test' este 3 vrea cam acelasi lucru numai ca in acest moment compari o raza cu suma dintre distanta
// si cealalata raza


int main() {
    int test;
    double r1,x1,y1,r2,x2,y2,dis; // declaram cele 6 variabile si distanta
    /*scanf("%d",&test);
    scanf("Raza primului cerc: %d",&r1);
    scanf("Coordonatele primului cerc: %d\n%d",&x1,&y1);
    whats this?
    scanf("Raza celui de-al doilea cerc: %d",&r2);
    scanf("Coordonatele celui de-al doilea cerc: %d\n%d",&x2,&y2);
    dis = sqrt(pow(x1-x2,2)+pow(y1-y2,2)); */

    if(test == 1) { //daca 'test' este 1
        scanf("%d",&test);
        scanf("Raza primului cerc: %d",&r1);
        scanf("Coordonatele primului cerc: %d\n%d",&x1,&y1);
        scanf("Raza celui de-al doilea cerc: %d",&r2);
        scanf("Coordonatele celui de-al doilea cerc: %d\n%d",&x2,&y2);
        //pana aici citim toate cele 6 variabile

    printf("Valori primul cerc:Raza,X,Y: %d, %d, %d\n",r1,x1,y1);
    printf("Valori celui de-al doilea cerc:Raza,X,Y: %d, %d, %d\n",r2,x2,y2);
        //aici printam cele 6 variabile
    }




    if(test == 2) {//daca 'test' este 2
        scanf("%d",&test);
        scanf("Raza primului cerc: %d",&r1);
        scanf("Coordonatele primului cerc: %d\n%d",&x1,&y1);
        scanf("Raza celui de-al doilea cerc: %d",&r2);
        scanf("Coordonatele celui de-al doilea cerc: %d\n%d",&x2,&y2);
        //pana aici citim toate cele 6 variabile

        dis = sqrt(pow(x1-x2,2)+pow(y1-y2,2));

//aici calculam distanta dintre centrul cercurilor
        //practic e functia sqrt,adica radical din 2 functii pow adunate
        // functia pow functioneaza astfel:
        // pt a ridica numarul n la puterea a: "n^a"
        // bagam argumentele in functia powe: pow(n,a)=n^a



        if(dis<=r1+r2) { //conditia gasita ca "Nota 2" in cerinta
    return 1;
    }
        else {return 0;}
    }
    if(test == 3) {
        scanf("%d",&test);
        scanf("Raza primului cerc: %d",&r1);
        scanf("Coordonatele primului cerc: %d\n%d",&x1,&y1);
        scanf("Raza celui de-al doilea cerc: %d",&r2);
        scanf("Coordonatele celui de-al doilea cerc: %d\n%d",&x2,&y2);

        //BRAVO! Daca ai ajuns aici inseamna ca ai inteles pasii anteriori si esti pregatit pt test(aproape)
        //follow la andreimihaidragomir pe insta?

        dis = sqrt(pow(x1-x2,2)+pow(y1-y2,2));


        if(r2>=r1+dis){return 1;}//conditia gasita ca "Nota 3" in cerinta
        else {return 0;} // returneaza zero
    }
}