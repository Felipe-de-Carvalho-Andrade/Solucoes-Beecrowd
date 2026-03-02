#include <stdio.h>

int main() {
    int a1, a2, a3, t1, t2, t3, menor_t = 0;

    scanf("%d %d %d", &a1, &a2, &a3);

    t1 = a1 * 0 + a2 * 2 + a3 * 4;
    t2 = a2 * 0 + a1 * 2 + a3 * 2;
    t3 = a3 * 0 + a1 * 4 + a2 * 2;

    if (t1 <= t2 && t1 < t3) {
        menor_t = t1;
    }
    else if (t2 < t1 && t2 <= t3) {
        menor_t = t2;
    }
    else {
        menor_t = t3;
    }
    printf("%d\n", menor_t);

    return 0;
}