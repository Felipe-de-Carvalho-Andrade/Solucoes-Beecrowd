#include <stdio.h>

int main() {
    int N, i, j;
    double GD, notas, r = 0.00, menor = 100.00, maior = 0.00;
    char nome[100];
    

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%s", &nome);
        scanf("%lf", &GD);
        for (j = 0; j < 7; j++) {  
            scanf("%lf", &notas);
            
            if (notas > maior) {
                maior = notas;
            }
            if (notas < menor) {
                menor = notas;
            }
            r += notas;
        }
        
        r = (r - maior - menor) * GD;
        
        printf("%s %.2lf\n", nome, r);
        r = 0.00;
        menor = 100.00;
        maior = 0.00;
    }
    
    return 0;
}