#include <stdio.h>
#include <math.h>

int main() {

   int vet[6];
   int A = 0, B = 0;

   for(int i = 0; i < 6; i++) {
      scanf("%d", &vet[i]);
   } 

   scanf("%d%d", &A,&B);
   
   while(A > 5 || A < 0 || B > 5 || B < 0) {
      scanf("%d%d", &A,&B);

   }

   int *pA = vet;
   int *pB = vet;

   printf("diferença entre os endereços: %d\n", abs(A - B));

   pA += A;
   pB += B;

   printf("Diferença entre os valores: %d\n", abs(*pA - *pB));

   return 0;
}