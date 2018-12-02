#include <stdio.h>
#include <stdlib.h>


void solving_equation(int* a, int* b, int* c);
int test_op(int a, int b);


int main() {
   // int a[] = {2, 3, 4, 5};
   // int b[] = {3, 1, 6, 7};
   // int c[4];

   int* a;
   int* b;
   int* c;

   c = (int *) malloc(4*sizeof(int));
   a = (int *) malloc(4*sizeof(int));
   b = (int *) malloc(4*sizeof(int));

   for (int i = 0; i < 4; i++){
     a[i] = 18;
     b[i] = 3;
     c[i] = 0;
   }
   printf("%s\n", "Hello from this point!");
    solving_equation(a, b, c);
    for (int i = 0; i < 4; i++){
        printf("%d / %d = %d\n", a[i], b[i], c[i]);
    }

    int f = 5;
    int g = 5;
    printf("%s\n%d + %d = %d\n", "Just adding", f, g, test_op(f, g));
    return 0;
}
