#include <stdio.h>

int main() {
    int N, M, y, notas[6] = {2, 5, 10, 20, 50, 100}, i, j;

    while (1) {
        scanf("%d %d", &N, &M);

        if (N == 0 && M == 0) {
            break;
        }
        
        y = M - N;
        for (i = 0; i <= 5; i++) {
            for (j = 0; j <= 5; j++) {
                if (notas[j] + notas[i] == y) {
                    printf("possible\n");
                    i = 6;
                    break;                
                }
                else if (i == 5 && j == 5) {
                    printf("impossible\n");
                    i = 6;
                    break;
                }
                
            }
            
        }
        
    }

    return 0;
}