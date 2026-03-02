#include <stdio.h>

int main() {
    int X[5], Y[5], i;

    for (i = 0; i < 5; i++)
        scanf("%d", &X[i]);

    for (i = 0; i < 5; i++)
        scanf("%d", &Y[i]);

    for (i = 0; i < 5; i++) {
        if (X[i] == Y[i]) {
            printf("N\n");
            i = 6;
            break;
        }
    }
    
    if (i != 6 )
        printf("Y\n"); 

    return 0;
}