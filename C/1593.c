//Felipe de Carvalho Andrade
//Lucas Nepumoceno Coelho

#include <stdio.h>
#include <limits.h>

int main() {
    int T, i, qtd = 0;
    long long int I;

    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf("%lld", &I);
        
        for (; I > 0;) {
            if (I % 2 == 1) {
                qtd++;
            }
            I = I / 2;
        }
        printf("%d\n", qtd);
        qtd = 0;
    }
    
    return 0;
}