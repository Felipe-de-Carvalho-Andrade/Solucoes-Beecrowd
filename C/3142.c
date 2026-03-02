#include <stdio.h>
#include <string.h>

int main() {
    char letra[10];

    scanf("%s", &letra[10]);

    if (letra[10] >= 65 && letra[10] <= 90) {
        printf("%d", letra[10] - 64);
    }
    else{
        printf("Essa coluna nao existe Tobias!");
    }
    
    return 0;
}