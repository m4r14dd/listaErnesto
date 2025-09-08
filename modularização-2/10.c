#include <stdio.h>


void simplificar(int *x, int *y){
    int m = *y;
    int mdc = 1;

    if(*y > *x) m = *x;

    for(int i = 2; i <= m; i++){
        while(*y % i == 0 && *x % i == 0){
            *x = *x / i;
            *y = *y / i;
            mdc *= i; 
        }
    }

}


int main() {

    int a, b;
    scanf("%d%d", &a,&b);

    simplificar(&a,&b);
    printf("%d/%d\n", a,b);

    return 0;
}