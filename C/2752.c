#include <stdio.h>
#include <string.h>

int main() {
    char x[50], f[] = "AMO FAZER EXERCICIO NO URI";

    strcpy(x, f);

    printf("<%s>\n", x);
    printf("<%30s>\n", x);    
    printf("<%.20s>\n", x);
    printf("<%-20s>\n", x);
    printf("<%-30s>\n", x);
    printf("<%.30s>\n", x);
    printf("<%30.20s>\n", x);
    printf("<%-30.20s>\n", x);

    return 0;
}