/* I - Felipe de Carvalho Andrade _ 20222009242 
   Davi James Vilela Guimarães _ 20222009224
   
   II - O problema abaixo está pedindo que dado 4 valores que representariam os palitos que seriam usados como 
   lados para formar um triângulo, imprimissemos na tela se era ou não possível formar um triângulo com eles. 
   Sabendo disso vamos explicar como foi solucionado o problema. */
   
#include <stdio.h>

int main() {
    
    int a, b, c, d; //declaramos a 4 variáveis que representariam os quatro palitos
    
    scanf("%d %d %d %d", &a, &b,&c, &d); //lemos o valor de cada variável

    /* Logo abaixo está a estratégia que usamos para resolver o problema que foi a seguinte: Para saber se seria
       possível montar um triângulo com os valores fornecidos teríamos que usar uma condição (if, else if) que,
       se dentre os valores fornecidos, pelo menos 3 deles atendessem a condição de existência de um triângulo 
       imprimiríamos a mensagem 'S', então fizemos isto para todas as combinações possíveis na qual pode ser
       formado um triângulo, e caso os valores não atenderem nenhuma das condições será impresso 'N'. */

    if (a + b > c && a + c > b && b + c > a) {
        printf("S\n");
    }
    else if (a + b > d && a + d > b && b + d > a) {
        printf("S\n");
    }
    else if (a + d > c && a + c > d && d + c > a) {
        printf("S\n");
    }
    else if (d + b > c && d + c > b && b + c > d) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }

    return 0;
}