#include <stdio.h>
#include <string.h>

int main() {
    int N, M;
    char a[256], f[] = "fechou", c[] = "clicou";

    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++) {
        scanf("%s", &a);
        
        if (strcmp(a, f) == 0) {
            N += 1;
        }
        else {
            N -= 1;
        }
    }
    printf("%d\n", N);

    return 0;
}