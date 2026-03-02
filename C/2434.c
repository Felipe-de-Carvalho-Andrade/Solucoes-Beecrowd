#include <stdio.h>

int main() {
    int N, S, menor, soma = 0, i;

    scanf("%d %d", &N, &S);
    menor = S;

    for (i = 0; i < N; i++) {
        scanf("%d", &S);
        soma += S;

            if (soma < menor) {
                menor = soma;
            }
        
    }
    printf("%d\n", menor);

    return 0;
}