#include <stdio.h>

int main() {
    int x[3], y, i, j;

    for (i = 0; i < 3; i++)
        scanf("%d", &x[i]);
    
    for (i = 1; i < 3; i++) {
        y = x[i];
        j = i - 1;
        while (j >= 0 && x[j] > y) {
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = y;
    }
    
    printf("%d\n", x[1]);
    
    return 0;
}