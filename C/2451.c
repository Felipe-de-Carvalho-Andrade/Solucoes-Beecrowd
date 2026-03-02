#include <stdio.h>

int main() {
    int N, i, j;

    scanf("%d", &N);
    getchar();

    char M[N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%c", &M[i][j]);
        }
        getchar();
    }
    
    int qtd = 0, qtd_max = 0;

    for (i = 0; i < N; i++) {
        if (i % 2 == 0) {
            for (j = 0; j < N; j++) {
                if (M[i][j] == 'o') {
                    qtd++;
                }
                if (qtd > qtd_max) {
                    qtd_max = qtd;
                }
                if (M[i][j] == 'A') {
                    qtd = 0;
                }
                
            }
        }
        else {
            for (j = N - 1; j >= 0; j--) {
                if (M[i][j] == 'o') {
                    qtd++;
                }
                if (qtd > qtd_max) {
                    qtd_max = qtd;
                }
                if (M[i][j] == 'A') {
                    qtd = 0;
                }
            }
        }
        
    }
    
    printf("%d\n", qtd_max);

    return 0;
}