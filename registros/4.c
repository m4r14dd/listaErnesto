#include <stdio.h>


typedef struct{int mn; char nom[50]; int n1; int n2; int n3}ald;

int main (){
ald a[5];
char nome[50];
int maio = 0, j = 0;
for(int i = 0; i < 5; i++){
   scanf("%d",&a[i].mn);
   scanf("%s",a[i].nom);
   scanf("%d",&a[i].n1);
   scanf("%d",&a[i].n2);
   scanf("%d",&a[i].n3);
   int m = (a[i].n1 + a[i].n2 + a[i].n3)/3;
   if(m > maio){
      j = i;
      maio = m;
   }

}
printf("%s\n%d\n%d\n%d\n",a[j].nom,a[j].n1, a[j].n2, a[j].n3);
}