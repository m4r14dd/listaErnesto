#include <stdio.h>
#include <math.h>

int pr(int num) {

    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            return 0;
        }
    }

    return 1;
}


int main() {

    int N;
    scanf("%d", &N);

    if(pr(N)) {
        printf("o número é primo\n");
    }
    else printf("o número não é primo\n");

    return 0;
}
