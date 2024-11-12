#include <stdio.h>

int main() {
    struct NAVA {
        char nume[64];
        int PS;
        int PF;
    };

    struct NAVA nava_noua[2];
    int test;

    scanf("%d", &test);



//DIN MOTIVE TEHNICE AM LUAT FOR LOOP UL DE LA 0 LA 2
//IN MOD NORMAL AR TREBUI SA MEARGA DE LA 0 LA 1:
// for (int i = 0; i <= 1; i++) {
// }
//toata smecheria la problema asta este la testul 2 cum faci acel while si cum definesti structura
// in rest sunt lucruri normale de citire/afisare



    if (test == 1) {
        for (int i = 0; i < 2; i++) {
            printf("Introduceti numele navei %d: ", i + 1);
            scanf(" %s", nava_noua[i].nume);  // citirea numelui
            printf("Introduceti PS pentru nava %d: ", i + 1);
            scanf("%d", &nava_noua[i].PS);  // citirea PS
            printf("Introduceti PF pentru nava %d: ", i + 1);
            scanf("%d", &nava_noua[i].PF);  // citirea PF
        }

        for (int i = 0; i < 2; i++) {
            printf("Numele navei %d este: %s\n", i + 1, nava_noua[i].nume);
            printf("PS-ul navei %d este: %d\n", i + 1, nava_noua[i].PS);
            printf("PF-ul navei %d este: %d\n", i + 1, nava_noua[i].PF);
        }
    }

    if (test == 2) {
        for (int i = 0; i < 2; i++) {
            printf("Introduceti numele navei %d: ", i + 1);
            scanf(" %[^\n]%*c", nava_noua[i].nume);
            printf("Introduceti PS pentru nava %d: ", i + 1);
            scanf("%d", &nava_noua[i].PS);
            printf("Introduceti PF pentru nava %d: ", i + 1);
            scanf("%d", &nava_noua[i].PF);
        }

        for (int i = 0; i < 2; i++) {
            printf("Numele navei %d este: %s\n", i + 1, nava_noua[i].nume);
            printf("PS-ul navei %d este: %d\n", i + 1, nava_noua[i].PS);
            printf("PF-ul navei %d este: %d\n", i + 1, nava_noua[i].PF);
        }

        while (nava_noua[0].PS > 0 && nava_noua[1].PS > 0) {
            nava_noua[0].PS -= nava_noua[1].PF;
            if (nava_noua[0].PS > 0) {
                nava_noua[1].PS -= nava_noua[0].PF;
            }
            printf("PS-ul navei 1 este: %d\n", nava_noua[0].PS);
            printf("PS-ul navei 2 este: %d\n", nava_noua[1].PS);
        }
    }

    if (test == 3) {
        for (int i = 0; i < 2; i++) {
            printf("Introduceti numele navei %d: ", i + 1);
            scanf(" %[^\n]%*c", nava_noua[i].nume);
            printf("Introduceti PS pentru nava %d: ", i + 1);
            scanf("%d", &nava_noua[i].PS);
            printf("Introduceti PF pentru nava %d: ", i + 1);
            scanf("%d", &nava_noua[i].PF);
        }

        for (int i = 0; i < 2; i++) {
            printf("Numele navei %d este: %s\n", i + 1, nava_noua[i].nume);
            printf("PS-ul navei %d este: %d\n", i + 1, nava_noua[i].PS);
            printf("PF-ul navei %d este: %d\n", i + 1, nava_noua[i].PF);
        }

        while (nava_noua[0].PS > 0 && nava_noua[1].PS > 0) {
            nava_noua[0].PS -= nava_noua[1].PF;
            if (nava_noua[0].PS > 0) {
                nava_noua[1].PS -= nava_noua[0].PF;
            }
        }

        if (nava_noua[0].PS <= 0 && nava_noua[1].PS <= 0) {
            printf("Ambele nave au fost distruse\n");
        } else if (nava_noua[0].PS <= 0) {
            printf("Nava %s a fost distrusa\n", nava_noua[1].nume);
        } else {
            printf("Nava %s a fost distrusa\n", nava_noua[0].nume);
        }
    }

    return 0;
}
