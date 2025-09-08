#include <stdio.h>


void troca(int *x, int *y){
int aux = *x;
*x = *y;
*y = aux;
}


int main() {

    int a, b;
    scanf("%d%d", &a,&b);
    if(a > b) troca(&a,&b);
    printf("%d %d\n",a,b);

    return 0;
}