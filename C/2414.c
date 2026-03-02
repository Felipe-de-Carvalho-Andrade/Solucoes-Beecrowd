#include <stdio.h>
#include <string.h>

/*
 FELIPE DE CARVALHO ANDRADE 20222009242
 Lucas Nepomuceno Coelho 20222009055
 Este codigo foi resolvido lendo o numero de casos que iriam ser lidos, apos isso foram lidos a senha para cada caso lido anteriormente, checkamos se a primeira letra é "R" e a segunda "A" e imprimimos o a senha apos um numero diferente de 0 aparecer.
 */

int main() {
    int n, j = 0, i;
    char senha[2022];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", senha);

        if (senha[0] == 'R' && senha[1] == 'A' && strlen(senha) == 20) {

            for (int z = 2; z < 20; z++) {
                if (senha[z] != '0') {
                    j = j + 1;
                }
                if (j > 0) {
                    printf("%c", senha[z]);
                }
            }
            printf("\n");
        }
        else {
            printf("INVALID DATA\n");
        }
        j = 0;
    }

    return 0;
}