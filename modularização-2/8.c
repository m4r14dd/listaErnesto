#include <stdio.h>

void maiormenor(int v[], int n, int*som, int*me){
    for(int i = 0; i < n; i++){
        *som += v[i];
    }
    *me = *som / n;
    return;
}
int main (){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }
    int soma = 0, media = 0;

    maiormenor(v,n,&soma,&media);

    printf("%d %d\n", soma, media);
    return 0;
}