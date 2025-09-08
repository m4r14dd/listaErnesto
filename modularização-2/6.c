#include <stdio.h>

void fon(int*a, int*b, int*c){
    // a menor
    // b medio
    // c maior
    if(*a > *b || *a > *c){// nao for menor
        if(*b < *c){
            int aux = *a;
            *a = *b;
            *b = aux;
        }
        else{
            int au = *a;
            *a = *c;
            *c = au;
        }
        
    } 
    
    if(*b > *c){
        int ax = *b;
        *b = *c;
        *c = ax;
    }
}

int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    fon(&x,&y,&z);
    printf("%d %d %d\n",x,y,z);
    return 0;
}