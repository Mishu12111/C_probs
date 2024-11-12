#include <stdio.h>
#include <math.h>
#include <limits.h>
#define m 10000

// Funcție pentru a verifica dacă un număr este pătrat perfect
int pp(int n) {
  double root = sqrt(n);
  return root == (double)(int)sqrt(n);
}
int main() {
  int x, y, z;
  int minSum = INT_MAX; // Inițializăm suma minimă cu valoarea maximă posibilă
  int bestX = 0, bestY = 0, bestZ = 0;

  // Căutăm valorile pentru x, y, z
  for (x = 1; x <= m; x++) { //  x
    for (y = 1; y < x; y++) { // y
      for (z = 1; z < y; z++) { //z
        // Verificăm dacă condițiile de patrat perfect sunt îndeplinite
        if (pp(x + y) && pp(x - y) && pp(x + z) && pp(x - z) && pp(y + z) && pp(y - z)) {
          int sum = x + y + z; // wth am i doing with my life??
          // Dacă suma este mai mică decât suma minimă curentă, actualizăm rezultatul
          if (sum < minSum) {
            minSum = sum;
            bestX = x;
            bestY = y;
            bestZ = z;
          }
        }
      }
    }
  }

  // Afișăm rezultatele corecte
  printf("x = %d, y = %d, z = %d -> x + y + z = %d\n", bestX, bestY, bestZ, minSum);
  return 0;
}
