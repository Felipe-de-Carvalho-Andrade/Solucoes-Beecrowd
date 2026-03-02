#include <stdio.h>

int main() {
    int N, i, num, x = 0, qtd = 1, pts = 1;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &num);

        if (num == x) {
            qtd++;
        }
        else {
            if (qtd > pts) {
                pts = qtd;
                qtd = 1;
            }
            else {
                qtd = 1;
            }
            
        }
        
        x = num;
    }
    
    if (qtd > pts) {
        pts = qtd;
    }

    printf("%d\n", pts);

    return 0;
}