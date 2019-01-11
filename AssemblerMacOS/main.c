#include <stdio.h>
#include <stdlib.h>


// void solving_equation(float* a, float* b, float* c, int n);
void solver(int* a, int* b, int* c, size_t n);

int main() {
   // int a[] = {2, 3, 4, 5};
   // int b[] = {3, 1, 6, 7};
   // int c[4];
   int n = 4;

   // float* a;
   // float* b;
   // float* c;
   //
   // c = (float *) malloc(n*sizeof(float));
   // a = (float *) malloc(n*sizeof(float));
   // b = (float *) malloc(n*sizeof(float));

   int* a;
   int* b;
   int* c;

   c = (int *) malloc(n*sizeof(int));
   a = (int *) malloc(n*sizeof(int));
   b = (int *) malloc(n*sizeof(int));

   for (int i = 0; i < n; i++){
     a[i] = 4;
     b[i] = 18;
     c[i] = 0;
   }
   printf("%s\n", "Hello from this point!");
    solver(a, b, c, 4);
    for (int i = 0; i < 4; i++){
        printf("%d / %d = %d\n", b[i], a[i], c[i]);
    }
    return 0;
}
