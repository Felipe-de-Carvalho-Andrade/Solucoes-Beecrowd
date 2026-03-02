#include <stdio.h>

int main() {
    int T, c[6], i, a = 0;

    scanf("%d", &T);
    for (i = 0 ; i < 5; i++) {
        scanf("%d", &c[i]);
        
        if (c[i] == T)
            a++;
    }
    printf("%d\n", a);
    
    return 0;
}