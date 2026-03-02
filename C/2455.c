/* I - Felipe de Carvalho Andrade _ 20222009242 
   Davi James Vilela Guimarães _ 20222009224

   II - O problema abaixo pede para que seja impresso um valor caso a gangorra esteja equilibrada,
   outro caso ela esteja desequilibrada para o lado direito e outra para caso ela esteja desequilibrada 
   para o lado esquerdo. Mas para definir se ela está ou não desequilibrada é nescessário sabermos o comprimento
   de cada lado da gangorra e os pesos das duas pessoas que sestiverem nela. */
   //Vale ressaltar que o problema nos da uma fórmula para descobrir se a gangorra está equilibrada que é: "P1 ∗ C1 = P2 ∗ C2".

#include <stdio.h>

int main() {
    int p1, c1, p2, c2, r1, r2; //declaramos as variáveis de peso, comprimento dos lados e do resultado.

    scanf("%d %d %d %d", &p1, &c1, &p2, &c2); //lemos o peso da pessoa 1 e 2, e lemos os comprimentos do lado direiro
    //e esquerdo da gangorra
    
    //realizamos as operações e armazenamos o resultado em uma veriável
    r1 = p1 * c1;
    r2 = p2 *c2;

    /* criamos estruturas de seleção (if, else if e else), para a situação na qual a gangorra está equilibrada
    que é quando o lado direito tem o mesmo valor do lado esquerdo; outra para situação na qual o lado a criança
    da esquerda esteja na parte debaixo, que é quando o lado esquerdo possui um valor maior que o lado direito;
    e a última situação que é quando a criança da direita esteja na parte debaixo, que é quando o lado direito 
    possui um valor maior que o lado direito. */
    if (r1 == r2) {
        printf("0\n"); 
    }
    else if (r1 > r2) {
        printf("-1\n");
    }
    else {
        printf("1\n");
    }
    
    return 0;
}