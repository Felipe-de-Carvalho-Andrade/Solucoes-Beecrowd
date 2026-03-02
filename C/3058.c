#include <stdio.h>

int main() {
    int N, i, G;
    double P, y, menor = 14000.00;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%lf %d", &P, &G);

        y = P * 1000.00 / G;
        
        if (y < menor) {
            menor = y;
        }
    }
    printf("%.2lf\n", menor);

    return 0;
}