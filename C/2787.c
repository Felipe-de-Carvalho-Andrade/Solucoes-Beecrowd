#include <stdio.h>

int main() {
    int L, C;

    scanf("%d", &L);
    scanf("%d", &C);

    if (C % 2 == 0 && L % 2 == 0) {
        printf("1\n");
    }
    else if (C % 2 == 1 && L % 2 == 1) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}