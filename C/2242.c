//Felipe de Carvalho Andrade - 20222009242
//Lucas Nepumoceno Coelho - 20222009055

#include <stdio.h>
#include <string.h>

int main() {
    int i, j = 0, N;
    char r[50], x[50];

    scanf("%s", r); //Lemos a string 'r' que represneta a risada digital

    N = strlen(r); //Calculamos o número de caracteres na string 'r'

    //Criamos um 'for' para comparar posição por posição da string, que vai até 'N - 1', que é o último caractere de 'r'
    for (i = 0; i < N; i++) {
        //Caso o caractere da string 'r' na posição 'i' seja uma vogal, adentraremos na condição
        if (r[i] == 'a' || r[i] == 'e' || r[i] == 'i' || r[i] == 'o' || r[i] == 'u') {
            x[j] = r[i]; //Copiamos a vogal para a string 'x' na posição 'j' que aumenta a cada vez que a condição for verdadeira
            j++;
        }
    }
    //A últiima posição da string 'x' recebe o '\0' pois como o 'j' acrescenta ao final do 'if' última posição, 
    //ficaria com valor lixo e não indicaria o fim da string
    x[j] = '\0'; 

    N = strlen(x); //Calculamos o número de caracteres na string 'x'
    char y[N];

    //Criamos um 'for' para atribuir a váriavel 'y' o conteúdo de 'x' só que de forma inversa (o último de'x' é o primeiro de 'y')
    for (i = 0, j = N - 1; i < N; i++, j--) {
        y[i] = x[j];
    }
    
    //Comparamos 'x' e 'y' caso forem iguais significa que a risada é engraçada, senão ela não é
    if (strncmp(y, x, N) == 0) { 
        printf("S\n"); //Imprime 'S' caso a risada seja engraçada
    }
    else {
        printf("N\n"); //Imprime 'N' caso a risada não seja engraçada
    }

    return 0; 
}