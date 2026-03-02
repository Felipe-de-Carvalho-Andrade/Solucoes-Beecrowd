/* I - Felipe de Carvalho Andrade _ 20222009242 
   Davi James Vilela Guimarães _ 20222009224 
   
   II - Este problema pede que seja lido um dois valores, um que representa a largura de um tubo no qual 
   serão colocados tapetes para um trasporte e outro valor que será a quantidade de tapetes que será levada para
   transporte. Depois o problema pede para imprimir a maior soma possível das áreas dos 'N' tapetes que pode ser 
   transportada. */

#include <stdio.h>
#include <limits.h>

int main() {
    long long int L, N, tapete_maior, tapete_menor, area; /* declaramos variáveis do tipo long long int pois 
    aluguns resultados como o do exemplo de saída do beecrowd são muito extensos, logo ocupando muito espaço na
    memória assim, necessitando de um tipo de variável capaz de armazenar valores maiores. */ 

    scanf("%lld %lld", &L, &N); //lemos as variáveis 'L' e 'N' que representam respectivamente a largura do tubo
    //e a quantidade de tapetes que serão transportados

    /* Para resolver este problema usamos a lógica de que para formar a maior área possível era necessário ter um
    tapete com a maior área possível e os outros com a menor possível que é 1, e para calcular a área de um 
    quadrado (que é o caso dos tapetes) é necessário multiplicar o lado por ele mesmo. Ao final basta somar 
    as áreas do tapetes menores com o tapete maior, e teremos a maior área possível de tapetes que pode ser 
    transportada. */
    tapete_menor = N - 1; //aqui fazemos uma operação para saber a área de todos os tapetes menores juntos.
    //OBS: a área é igual a N - 1, pois como explicado anteriormente precisamos de um tapete com maior área possível
    //então tiramos este tapete que é o '1' na operação e como a área dos tapetes menores será 1, então não há problema em usar N - 1
    //como a área da soma de todos os tapetes menores.
    tapete_maior = L - tapete_menor; //aqui descobrimos o valor do lado do tapete maior, para fazer isso tiramos 
    //a soma dos lados dos tapetes menores (que no caso o lado dos tapetes menores vale 1) da largura do tubo, assim
    //tendo o valor máximo da largura que o tapete maior pode assumir.

    tapete_maior = tapete_maior * tapete_maior; //aqui multiplicamos o lado do tapete maior por ele mesmo, assim descobrindo sua área
    area = tapete_maior + tapete_menor; //aqui descobrimos a maior soma possível das áreas dos 'N' tapetes que pode ser transportada

    //por fim, imprimimos o valor máximo da soma das áreas dos 'N' tapetes.
    printf("%lld\n", area);

    return 0;
}