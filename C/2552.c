//O código ficou meio comfunso então resolvi explicar ele para ficar claro - Felipe de Carvalho Andrade

#include <stdio.h>

int main() {
    int N, M;

    while (scanf("%d %d", &N, &M) != EOF) {

        int X[N][M];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &X[i][j]);
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (X[i][j] == 1) {
                    printf("9");
                }
                else {
                    int y = 0;

                    //Somei a variável 'y', pois como só lemos 0 e 1, e como 1 é onde tem pão de queijo isso significa
                    //que o valor armazenado em y vai ser equivalente aos pães de queijo que tem em volta
                    
                    //Pois não é possível ter uma linha acima da 0 na matriz
                    if (!(i == 0)) {
                        y += X[i-1][j]; //Confere a linha anterior na mesma coluna
                    }

                    //Pois não é possível ter uma coluna a esquerda da 0 na matriz
                    if (!(j == 0)) {
                        y += X[i][j-1]; //Confere a coluna anterior na mesma linha
                    }
                    
                    //Pois na última linha não pode ter nenhuma linha abaixo dela
                    if (i < N - 1) {
                       y += X[i+1][j]; //Confere a linha posterior na mesma coluna
                    }
                    
                    //Pois na última coluna não pode ter nenhuma coluna a direita dela
                    if (j < M - 1) {
                        y += X[i][j+1]; //Confere a coluna posterior na mesma linha
                    }

                    printf("%d", y);
                }
                
            }
            printf("\n");
        }
        
    }
    
    return 0;
}