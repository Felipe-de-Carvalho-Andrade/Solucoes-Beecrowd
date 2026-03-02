#include <stdio.h>

int main() {
    while (1) {
        long long int M, X;

        scanf("%lld %lld", &X, &M);

        if (X == 0 && M == 0 )
            break;
        
        printf("%lld\n", X * M);
    }

    return 0;
}