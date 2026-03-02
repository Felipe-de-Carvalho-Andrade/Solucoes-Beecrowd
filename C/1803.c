#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char M[4][100];
    int qtd;
    
    for (int i = 0; i < 4; i++) {
        scanf("%s", &M[i]);
        getchar();
    }
    qtd = strlen(M[0]);
    
    char M2[qtd][5];
    int k, l;

    for (int i = 0, k = 0; i < qtd; i++, k++) {
        for (int j = 0, l = 0; j < 4; j++, l++) {
            M2[k][l] = M[j][i];
        }
    }

    for (int i = 0; i < qtd; i++)  {
        M2[i][4] = 0;
    }

    int valor[qtd];
     
    for (int i = 0; i < qtd; i++) {
        valor[i] = atoi(M2[i]);
    }
    
    for (int i = 1; i < qtd - 1; i++) {
        printf("%c", (char)((valor[0] * valor[i] + valor[qtd-1]) % 257));
    }
    printf("\n");

    return 0;
}