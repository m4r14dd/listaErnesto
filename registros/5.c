#include <stdio.h>
#include <stdlib.h>

typedef struct{int h; int m; int s;} tempo;

int main(){
tempo t[5];
for(int i = 0; i < 5; i++){
   scanf("%d%d%d",&t[i].h, &t[i].m, &t[i].s);
}
int maior;
for(int i = 1; i < 5; i ++){
   if(t[i - 1].h > t[i].h){
      maior = i - 1;
   }
   else{
      if(t[i - 1].m > t[i].m){
      maior = i -1;
      }
      else{
         if(t[i - 1].s > t[i].s){
            maior = i - 1;
         }
      }
   }
}
printf("%d %d %d\n",t[maior].h, t[maior].m, t[maior].s);
}