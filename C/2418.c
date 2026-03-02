#include <stdio.h>

int main() {
    double maior = 0.00, menor = 100.00, soma = 0.00, nota, notaf;
    int i;

    for (i = 0; i < 5; i++) {
        
        scanf("%lf", &nota);

        if (nota >= maior) {
            maior = nota;
        }
        if (nota <= menor) {
            menor = nota;
        }
        
        soma += nota;

    }
    
    notaf = (double)(soma - maior) - menor;

    printf("%0.1lf\n", notaf);

    return 0;
}