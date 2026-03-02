#include <stdio.h>

int main() {
    int M, A, B, C;

    scanf("%d", &M);
    scanf("%d", &A);
    scanf("%d", &B);

    C = M - (A + B);

    if (A > B && A > C) {
        printf("%d\n", A);
    }
    else if (B > A && B > C) {
        printf("%d\n", B);
    }
    else {
        printf("%d\n", C);
    }

    return 0;
}