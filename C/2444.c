#include <stdio.h>

int main() {
    int V, T, x;

    scanf("%d %d", &V, &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &x);

        V += x;

        if (V > 100) {
            V = 100;
        }
        else if (V < 0) {
            V = 0;
        }
        
        
    }
    printf("%d\n", V);
    
    return 0;
}