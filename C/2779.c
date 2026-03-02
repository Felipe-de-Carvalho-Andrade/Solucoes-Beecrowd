#include <stdio.h>

int main() {
    int N, M, X, i, soma = 0, dif, y = 0;

    scanf("%d", &N);
    scanf("%d", &M);

    for (i = 0; i < M; i++) {
        scanf("%d", &X);

            if (X != y) {
                soma++;
                y = X;
            }
    }
    
    dif = N - soma;

    printf("%d\n", dif);

    return 0;
}