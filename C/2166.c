/* I - Felipe de Carvalho Andrade _ 20222009242 
   Davi James Vilela Guimarães _ 20222009224 */ 

#include <stdio.h>

int main() {

    //breves consideracoes de analise:

    /*
    1- O prblema necessita de uma certa analise matematica para entender o processo da repeticao de fracao e implementalo.
    2- a raiz sera obrigatoriamente um numero de ponto flutuante.
    3- Na regra matematica da repeticao, temos a constante 1, que somará com o resultado de todo o resultado da repeticao de fracoes
    4- Equacao = 1 + (1 / 2 + (2 + 1/2 + 2 + (1/2)))...
    */

    int N, i;
    double raiz = 0, resultado = 0;

    /* primeiramente, lemos o valor da quantidade de vezes que queremos que o denominador se repita, ele será o nosso controle do for*/
    scanf("%d", &N); 

    /*a partir disso, devemos executar o loop, pois o problema nos fala que devemos repetir a parte do denominador dada a quantidade de
    repetições informadas*/
    /*Esse loop irá calcular a parte fracionaria dada a repeticao informada pelo usuario, ele soma 2 ao resultado e depois 
    usa esse resultado como denominador da próxima fracao, gerando fracoes infinitas*/
    for(i = 0; i < N; i++) {

        resultado = resultado + 2.0;
        resultado = (1.0 / resultado);
    }

    //Com o "resultado decimal" das fracoes, basta agora somarmos a constante nesse resultado, formando finalmente a raiz.

    raiz = 1.0 + resultado;

    //Imprimindo a raiz com 10 casas decimais.
    printf("%.10lf", raiz);

    return 0;
}