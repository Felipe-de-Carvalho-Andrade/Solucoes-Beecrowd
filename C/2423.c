#include <stdio.h>

int main() {
    int a, b, c, r1, r2, r3, r;

    scanf("%d %d %d", &a, &b, &c);

    r1 = a / 2;
    r2 = b / 3;
    r3 = c / 5;
   
    if (r1 == r2 && r2 == r3) {
        r = r2;
        printf("%d\n", r);
    }
    
    if (r1 <= r2 && r1 <= r3) {
        printf("%d\n", r1);
    }
    else if (r2 <= r1 && r2 <= r3) {
        printf("%d\n", r2);
    }
    else if (r3 <= r1 && r3 <= r2) {
        printf("%d\n", r3);
    }
    
    return 0;
}