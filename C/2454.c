/* I - Felipe de Carvalho Andrade _ 20222009242 
   Davi James Vilela Guimarães _ 20222009224

   II - O problema abaixo nos pede para imprimir qual o caminho que a boliha vai seguir dado a posição
   das portinhas P e R. Sabendo disso observe a solução abaixo. */

#include <stdio.h> 

int main() {
    int P, R; //declaramos a variável 'P' e 'R'.

    scanf("%d %d", &P, &R); //lemos dois valores para as variáveis 'P' e 'R', que representam a posição das portinhas

    //criamos estruturas de seleção (if e else if), para cada situação possível dada a posição das portinhas
    //e lido a posição de 'P' e 'R' entrará em uma dessas etruturas de selação e imrpimirá o caminho que foi tomado
    if (P == 0 && R == 0) {
        printf("C\n");
    }
    else if (P == 0 && R == 1) {
        printf("C\n");
    }
    else if (P == 1 && R == 0) {
        printf("B\n");
    }
    else if (P == 1 && R == 1) {
        printf("A\n");
    }
    
    return 0;
}