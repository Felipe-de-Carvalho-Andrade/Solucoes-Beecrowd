#include <stdio.h>

int main() {
    int N, T, V, d = 0, i;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d %d", &T, &V);

        d += T * V;
    }
    
    printf("%d\n", d);

    return 0;
}