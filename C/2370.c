#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100]; 
    int habilidade;
} Aluno;

int main() {
    int N, T;

    scanf("%d %d", &N, &T);

    Aluno alunos[N];

    for (int i = 0; i < N; i++) 
        scanf("%s %d", alunos[i].nome, &alunos[i].habilidade);
    
    for (int i = 0; i < N - 1; i++) 
        for (int j = i + 1; j < N; j++) {
            if (alunos[j].habilidade > alunos[i].habilidade) {
                Aluno temp = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = temp;
            }
        }

    for (int i = 0; i < T; i++) {
        printf("Time %d\n", i + 1);

        int k = 0;
        int tamanho_possivel = (N + 2) / 3; 
        Aluno time[tamanho_possivel];
        for (int j = i; j < N; j += T) {
            time[k] = alunos[j];
            k++;
        }

        for (int j = 0; j < k - 1; j++) 
            for (int l = j + 1; l < k; l++) {
                if (strcmp(time[j].nome, time[l].nome) > 0) {
                    Aluno temp = time[j];
                    time[j] = time[l];
                    time[l] = temp;
                } 
            }

        for (int j = 0; j < k; j++) 
            printf("%s\n", time[j].nome);
        printf("\n");
    }

    return 0;
}