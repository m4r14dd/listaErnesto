#include <stdio.h>

int main(){
int v[3];
for(int i  = 0; i < 3; i++){
   scanf("%d", &v[i]);
}
for(int i = 1 ; i < 3; i++){
   for(int j = 0; j < 3; j ++){
      if(v[i] < v[j]){
         int aux =  v[j];
         v[j] = v[i];
         v[i] = aux;
      }
   }
}
for(int i  = 0; i < 3; i++){
   printf("%d\n", v[i]);
}
return 0;
}