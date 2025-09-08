#include <stdio.h>

void maiormenor(int v[], int n, int*maior, int*menor){
    for(int i = 0; i < n; i++){
        if(v[i] < *menor) *menor = v[i];
        if(v[i] > *maior) *maior = v[i];
    }
}
int main (){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }
    int ma = 0;
    int me = 1e5;
    maiormenor(v,n,&ma,&me);
    printf("%d %d\n", ma, me);
    return 0;
}