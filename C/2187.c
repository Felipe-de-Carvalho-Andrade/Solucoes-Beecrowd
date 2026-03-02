#include <stdio.h>

int main() {
    int V, I = 0, J = 0, K = 0, L = 0, n = 1;

    while (1) {
        scanf("%d", &V);

        if (V == 0) {
            break;
        }
        //Notas de 50 bits
        I = V / 50;
        V -= (I * 50);
        //Notas de 20 bits
        J = V / 10;
        V -= (J * 10);
        //Notas de 5 bits
        K = V / 5;
        V -= (K * 5);
        //Notas de 1 bits
        L = V;

        printf("Teste %d\n", n);
        printf("%d %d %d %d\n\n", I, J, K, L);
        n++;
    }
    
    return 0;
}