#include <stdlib.h>
#include <stdio.h>


int solve(){
 int a = 0, b = 0, c = 0;
 scanf("%d %d %d", &a, &b, &c);


  int x[3];
  x[0] = a;
  x[1] = -a;
  x[2] = 0;
  int y[3];
  y[0] = b;
  y[1] = -b;
  y[2] = 0;
  int z[3];
  z[0] = c;
  z[1] = -c;
  z[2] = 0;

 int i, j, k;
 for (i = 0; i < 4; i++) {
   for (j = 0; j < 4; j++) {
     for (k = 0; k < 4; k++) {
        if (i + k + j < 6) {
          if (x[i] + y[j] + z[k] == 0) {
            return 1;
          }
        }
     }
   }
 }

 return 0;
}

int main() {
  char resp = solve();
  printf("%s\n", resp ? "S" : "N");
}
