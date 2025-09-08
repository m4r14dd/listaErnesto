#include <stdio.h>

int main() {

    int a[10], b[10], p[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d%d", &a[i],&b[i]);
    }
   int l = 0, r = 9;

    while(r >= 0) {
        p[l] = a[l] * b[r];
        l++;
        r--;
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");


    return 0;
}