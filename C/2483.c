/* I - Felipe de Carvalho Andrade _ 20222009242 
   Davi James Vilela Guimarães _ 20222009224 
   
   II - Este problema pede que seja lido um valor que representa o grau de felicidade de uma pessoa e este valor
   lido será o número de vezes que deve ser repetida a penúltima letra 'a' da palavra Feliz Natal. */

#include <stdio.h>

int main() {
    int a, i = 0; //declaramos a variável controladora e a inicializamos como '0' e declaramos a variável 'a' 
    //representa o grau de felicidade de uma pessoa, ou seja, o número de vezes que terá que ser repetida a letra a 

    scanf("%d", &a); //lemos o grau de felicidade da pessoa
    
    /* criamos um if para garantir que a seja maior que 0. Depois imprimimos a mensagem 'Feliz nat', logo em
       seguida entramos em um laço de repetição (while), que imprimirá a letra 'a' de acordo com o grau de
       felicidade uma pessoa, ou seja, imprimirá a letra 'a' o número de vezes que a pessoa digitou. */
    if (a > 0) {
        printf("Feliz nat");
        while (i < a) {
            printf("a");

            i++;
        }
        
        //por fim, saíamos do laço de repetição imprimimos a letra 'l' com a exclamção para completar Feliz Natal! e quebramos a linha.
        printf("l!\n");
    }
    
    return 0;
}