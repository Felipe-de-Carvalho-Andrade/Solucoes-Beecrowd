#include <stdio.h>

int main() {
    int N, B, H, W, P, C;
    int valor, menor, x = 0;

    scanf("%d %d %d %d", &N, &B, &H, &W);

    for (int i = 0; i < H; i++) {
        scanf("%d", &P);
        for (int j = 0; j < W; j++) {
            scanf("%d", &C);

            if (C >= N) {
                valor = N * P;
                if (valor <= B) {
                    x++;
                    if (x == 1) 
                        menor = valor;
                    
                }
            }

        }
        if (valor < menor && x > 0 ) 
            menor = valor;
    }
    if (x == 0) 
        printf("stay home\n");
    else 
        printf("%d\n", menor);
    
    return 0;
}