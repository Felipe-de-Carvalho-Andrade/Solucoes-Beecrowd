//Davi James Vilela Guimaraes
//Felipe de Carvalho Andrade

#include <stdio.h>

int main() {
    int N, i;
    char nome[100];
    double dados_percentuais[6] = {0, 0, 0}, tentativas[3], tentativas_bem_sucedidas[3], resultado[3];

    scanf("%d", &N);

    for(i = 0; i < N; i++) {

        scanf("%s", &nome);

        scanf("%lf %lf %lf", &tentativas[0], &tentativas[1], &tentativas[2]);
        scanf("%lf %lf %lf", &tentativas_bem_sucedidas[0], &tentativas_bem_sucedidas[1], &tentativas_bem_sucedidas[2]);

        //armazenador
        dados_percentuais[0] += tentativas[0]; 
        dados_percentuais[1] += tentativas[1];
        dados_percentuais[2] += tentativas[2];

        dados_percentuais[3] += tentativas_bem_sucedidas[0];
        dados_percentuais[4] += tentativas_bem_sucedidas[1];
        dados_percentuais[5] += tentativas_bem_sucedidas[2];


    }

    //calculador de percentual
    resultado[0] = (dados_percentuais[3] / dados_percentuais[0]) * 100;
    resultado[1] = (dados_percentuais[4] / dados_percentuais[1]) * 100;
    resultado[2] = (dados_percentuais[5] / dados_percentuais[2]) * 100;

    printf("Pontos de Saque: %.2lf %%.\n", resultado[0]);
    printf("Pontos de Bloqueio: %.2lf %%.\n", resultado[1]);
    printf("Pontos de Ataque: %.2lf %%.\n", resultado[2]);

    return 0;
}