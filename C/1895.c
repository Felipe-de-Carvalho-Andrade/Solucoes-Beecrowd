//Davi James Vilela Guimaraes
//Felipe de Carvalho Andrade

#include <stdio.h>
#include <math.h>

int main() {
    int N, T, L, S, i, absolute;
    int pontosA = 0, pontosB = 0;

    scanf("%d %d %d", &N, &T, &L);

    for(i = 0; i < N-1; i++) {
        scanf("%d", &S);

        absolute = fabs(T-S);

        if(i % 2 == 0 && absolute <= L) {
            pontosA+= absolute;
            T = S;
        }

        if(i % 2 != 0 && absolute <= L) {
            pontosB+= absolute;
            T = S;
        }
    }

    printf("%d %d\n", pontosA, pontosB);

    return 0;
}