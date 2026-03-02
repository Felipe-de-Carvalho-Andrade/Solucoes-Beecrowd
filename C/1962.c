/* I - Felipe de Carvalho Andrade _ 20222009242 
   Davi James Vilela Guimarães _ 20222009224

   II - O problema abaixo pede que lido certos valores que representariam a quantidade de anos que se passaram, 
   uma N quantidade de vezes, imprimissemos que ano esta quantidade de anos transcorridos representa no calendário
   cristão, ou seja, o ano que é representado e se ele está depois ou antes de Cristo. Vale lembrar que o ano 
   máximo é 2015 D.C. Sabendo disto vamos explicar como o problema foi solucionado. */
   
#include <stdio.h>

int main() {
    
    int N, ano, i; //declaramos uma variável 'N' que serve para indicar a quantidade de vezes que queremos ler
                   //os anos transcorridos; declaramos outra variável que será a variável controladora do for;
                   //declaramos outra variável que será os anos transcorridos. 

    scanf("%d", &N); //lemos a quantidade de vezes que queremos ler os anos transcorridos.
    
    /* Logo abaixo está a estratégia utilizada: Inicialmente era necessário criar um laço de repetição, já que nós
       teríamos que ler um valor de anos transcorridos 'N' vezes e para nos ajudar a controlar o laço de repetição
       usamos uma variável controladora 'i'. Ao entrar no laço de repetição vamos ler um valor de anos transcorridos
       depois de ler entraríamos em uma das estruturas de seleção (if, else if). */
    for (i = 0; i < N; i++) { 
        
        scanf("%d", &ano);

        /* As estruturas de selação abaixo servem para dado um ano transcorrido elas definirem se este ano 
           transcorrido representa um ano depois ou antes de Cristo. Caso o ano trascorrido seja maior ou igual
           a 2015 significa que o ano que ele representa foi um ano antes de Cristo já que na realidade do 
           problema ano máximo é 2015 D.C. mas, para decobrir que ano esta representado basta subtrair o ano 
           transcorrido por 2015 e somar 1 já que o ano 0 é considerado antes de cristo. Caso o ano lido seja 
           menor que 2015 significa que é um ano depois de Cristo, mas para descobrir que ano é basta subtrair 
           2015 pelo ano transcorrido que foi lido. */
        if (ano >= 2015 ) {
           printf("%d A.C.\n", ano - 2015 + 1); 
        }
        else if (ano < 2015) {
            printf("%d D.C.\n", 2015 - ano);
        }
    }

    return 0;
}