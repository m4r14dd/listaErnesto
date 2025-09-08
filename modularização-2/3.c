#include <stdio.h>

void maximo(int*a, int*b,int*resu){
    if(*a < *b) *resu = *b;
    else *resu = *a;
}

int main(){
    int x,y,resultado = 0;
    scanf("%d %d", &x, &y);
    maximo(&x,&y,&resultado);
    printf("%d\n",resultado);
    return 0;
}