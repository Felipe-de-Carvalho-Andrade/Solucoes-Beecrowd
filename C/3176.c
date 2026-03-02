#include <stdio.h>
#include <string.h>

int main() {
    int N, i, j;

    scanf("%d", &N);

    typedef struct  {
        char nome[20];
        int idade;
    } Duendes;

    Duendes a[N], y;
    char name[20];
    int age;

    for (i = 0; i < N; i++) {
        scanf("%s %d", &name, &age);
        a[i].idade = age;
        strcpy(a[i].nome, name);
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j <N; j++) {
            if (i != j) {
                if (a[i].idade == a[j].idade) {
                    if (strcmp(a[i].nome, a[j].nome) > 0) {
                        strcpy(y.nome, a[i].nome);
                        strcpy(a[i].nome, a[j].nome);
                        strcpy(a[j].nome, y.nome);
                    }
                }
                else if (a[i].idade < a[j].idade) {
                    y.idade = a[i].idade;
                    strcpy(y.nome, a[i].nome);
                    a[i].idade = a[j].idade;
                    strcpy(a[i].nome, a[j].nome);
                    a[j].idade = y.idade;
                    strcpy(a[j].nome, y.nome);
                }
            }
        }
    }
    for (i = 1; i <= N / 3; i++) {
        printf("Time %d\n", i);
        for (j = N - i; j >= 0; j -= N / 3) {
            printf("%s %d\n", a[j].nome, a[j].idade);
        }
        printf("\n");
    }
    
    return 0;
}