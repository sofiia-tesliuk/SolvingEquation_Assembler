#include <stdio.h>
#include <stdlib.h>


void solver(float* a, float* b, float* c, int n);

int main() {
   int n = 4;

   float* a;
   float* b;
   float* c;

   c = (float *) malloc(n*sizeof(float));
   a = (float *) malloc(n*sizeof(float));
   b = (float *) malloc(n*sizeof(float));

   for (int i = 0; i < n; i++){
     a[i] = i + 0.5;
     b[i] = i + 1.5;
     c[i] = -1.0;
   }
   printf("%s\n", "Hello from this point!\nLet's find solution of equation.");
   solver(a, b, c, n);
   for (int i = 0; i < n; i++){
       printf("%f * %f + (%f) = 0\n", a[i], c[i], b[i]);
   }
   return 0;
}
