#include <stdio.h>

int main() {
    int i, N, posi = 1, maior;

    scanf("%d", &N);

    int R[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &R[i]);
    }
    for (i = 0; i < N; i++) {
        if (i == 0) {
            maior = R[i];
        }
        if (R[i] >= maior) {
            maior = R[i];
        }
        else {
            printf("%d\n", posi);
            break;
        }
        
        if (i == N-1) {
            printf("0\n");
        }
        
        posi++;
    }    

    return 0;
}