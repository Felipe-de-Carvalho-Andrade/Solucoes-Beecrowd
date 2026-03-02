//Felipe de Carvalho Andrade - 20222009242
//Lucas Nepumoceno Coelho - 20222009055

#include <stdio.h>
#include <string.h>

int main() {
    int N, i, j, n;
    char a1[1000], a2[1000];
 
    scanf("%d", &N); //Lemos a quantidade de vezes 'N' que o arquivo deve ser sobrescrito
    scanf("%s", &a1); //Lemos os bits do arquivo antes da exclusão
    scanf("%s", &a2); //Lemos os bits após o arquivo ser excluído

    n = strlen(a1); //Calculamos a quantidade de caracteres na string 'a1'

    //Criamos este 'for' para repetir o processo abaixo as 'N' vezes pedidas
    for (i = 0; i < N; i++) {
        //Criamos um 'for' para comparar posição por posição da string, que vai até 'n - 1', que é o último caractere de 'a1'
        for (j = 0; j < n; j++) {
            //Caso o caractere da string 'a1' na posição 'j' seja 1, adentraremos na condição
            if (a1[j] == '1') {
                a1[j] = '0'; //Caso a condição acima seja atendida 'a1' na posição 'j' recebe 0
            }
            else {
                a1[j] = '1'; //Caso a condição do 'if' seja falsa 'a1' na posição 'j' recebe 1
            }
        }
        
    }

    //Caso os valores de 'a1' e 'a2' forem iguais significa que a operação falhou, senão deu certo
    if (strncmp(a1, a2, n)) {
        printf("Deletion failed\n");
    }
    else {
        printf("Deletion succeeded\n");
    }
    
    return 0;
}