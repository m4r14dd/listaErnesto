#include <stdio.h>

void incrementa(int *po){
   (*po)++;
   return;
}

int main(){
   int a;
   scanf("%d",&a);
   int* p = &a;
   incrementa(p);
   printf("%d\n",a);
   printf("%p\n",p);
}