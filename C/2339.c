#include <stdio.h>

int main() {
    int C, P, F;

    scanf("%d %d %d", &C, &P, &F);

    if (F * C <= P)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}