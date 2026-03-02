#include <stdio.h>

int main() {
    int p, i, r = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &p);
    }
    
    r += p * 300;
    r += p * 1500;
    r += p * 600;
    r += p * 1000;
    r += p * 150;

    printf("%d\n", r + 255);

    return 0;
}