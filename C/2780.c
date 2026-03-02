/* I - Felipe de Carvalho Andrade _ 20222009242 
   Davi James Vilela Guimarães _ 20222009224 
   
   II - Este problema pede que seja determinemos quantos pontos um robô marcou dado a distância de onde ele
   acertou a cesta. */

#include <stdio.h>

int main() {
    int D; //declaramos a variável 'D' que representa a distância da qual o robô acertou a cesta.

    scanf("%d", &D); //lemos a variável 'D' 

    /* criamos condições (if e else if) que lido o valor de 'D' ele analise se 'D' se encontra dentro da condição 
       estabelecida e quando ele entrar em uma condição será impresso o valor dos pontos que ele fez com o lançamento. */
    if (D > 1400 && D <= 2000) { 
        printf("3\n"); //ele marcará 3 pontos caso sua distância seja > 1400 e <= 2000
    }
    else if (D > 800 && D <= 1400) {
        printf("2\n"); //ele marcará 2 pontos caso sua distância seja > 800 e <= 1400
    }
    else if (D <= 800) {
        printf("1\n"); //ele marcará 1 ponto caso sua distância seja <= 800
    }

    return 0;
}