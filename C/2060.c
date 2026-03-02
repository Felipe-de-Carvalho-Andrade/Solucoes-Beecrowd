/* I - Felipe de Carvalho Andrade _ 20222009242 
   Davi James Vilela Guimarães _ 20222009224
   
   II - Este problema pede que seja lido uma N quantidade de vezes um valor qualquer, logo pede para verificar 
   se este valor lido é múltiplo de 2, 3, 4 e/ou 5 e ao final pede para imrpimir quantos números são múltiplos de
   2, 3, 4 e/ou 5. Sabendo disto observe a solução que foi usado abaixo. */

#include <stdio.h>

int main() {
    int qtd, i, mult2 = 0, mult3 = 0, mult4 = 0, mult5 = 0, numero; //declara uma váriavel para armazenar 
    //a quantidade de números que serão lidos, declara também uma variável controladora 'i', uma variável 
    //para armazenar os números lidos e os outras 4 variáveis para armazenar a quantidade de números que são
    //múltiplos, sendo uma para cada divisor(2, 3, 4, e 5).

    scanf("%d", &qtd); //le um valor e armazena na variável que representa a quantidade de números que serão lidos
    
    /* Aqui criamos um laço de repetição que serve para ler um valor a quantidade de vezes que for determinada */
    for (i = 0; i < qtd; i++) {
        
        scanf("%d", &numero); //lemos um valor que será analisado

        /* Abaixo temos estruturas de selação (if) que servem para identificar se o número lido é ou não múltiplo
           de algum dos números abaixo, e caso ele seja múltiplo de algum número ele entrará no laço de repetição
           e somará 1 a váriavel que serve para a quantidade de números que são múltiplos. */
        if (numero % 2 == 0) { //Aqui verifiamos se o número lido é múltiplo de 2, usando a estratégia do resto da
            mult2++;           //divisão, que é caso o número lido divido por 2 ter resto igual a 0 ele é múltiplo de 2
        }
        if (numero % 3 == 0) { //Aqui verifiamos se o número lido é múltiplo de 3, usando a estratégia do resto da
            mult3++;           //divisão, que é caso o número lido divido por 3 ter resto igual a 0 ele é múltiplo de 3
        }
        if (numero % 4 == 0) { //Aqui verifiamos se o número lido é múltiplo de 4, usando a estratégia do resto da
            mult4++;           //divisão, que é caso o número lido divido por 4 ter resto igual a 0 ele é múltiplo de 4
        }
        if (numero % 5 == 0) { //Aqui verifiamos se o número lido é múltiplo de 5, usando a estratégia do resto da
            mult5++;           //divisão, que é caso o número lido divido por 5 ter resto igual a 0 ele é múltiplo de 5
        }   
    }
        //Aqui é impresso quantos dos números lidos são múltiplos de 2, 3, 4 ou 5.
        printf("%d Multiplo(s) de 2\n", mult2);
        printf("%d Multiplo(s) de 3\n", mult3);
        printf("%d Multiplo(s) de 4\n", mult4);
        printf("%d Multiplo(s) de 5\n", mult5);

    return 0;
}