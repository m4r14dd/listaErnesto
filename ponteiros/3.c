#include<stdio.h>

int main(){
int v[5];
int *p = v;
for(int i = 0; i < 5; i++){
   scanf("%d",p+i);
}
for(int i = 0; i < 5; i++){
   printf("%d ",*(p+i));
}
printf("\n");


   return 0;
}