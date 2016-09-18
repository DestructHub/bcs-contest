#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
int a = 0, b = 0, c = 0, d = 0;
int N = -1;
long int i = 0;


scanf("%i %i %i %i", &a, &b, &c, &d);

//int inc = a % 2 == 0 ? 2 : 3; 

for(i = 0; i <= 1000000000; i+=1) {
if(i % a == 0) {
  if(i % b != 0) {
   if(c % i == 0) {
    if(d % i != 0) {
     N = (int)i;
     break;
    }
   }
  }
 }
}

printf("%d\n", N);

return 0;
}
