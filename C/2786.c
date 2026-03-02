/* I - Felipe de Carvalho Andrade _ 20222009242 
   Davi James Vilela Guimarães _ 20222009224 
   
   II - Este problema pede seja lido o valor de um comprimento e de largura para o piso de uma escola. Depois de 
    ler o valor da largura e do comprimento o problema pede que determinemos o número de lajotas do tipo 1 e 2 que
    serão usadas neste piso, sabendo que serão usados apenas 4 lajotas do tipo 3. */

#include <stdio.h>

/* condiderações:
- para resolver este problema tentamos achar um padrão na disposição das lajotas
- o padrão que nós achamos estava relacionado a quantidade */
int main() {
    int L, C, t1, t2; //declaramos as variáveis 'L' e 'C', que são a largura e o comprimento respectivamente, e 
    //declaramos também as variáveis 't1' e 't2' que representam as lajotas do tipo 1 e 2

    scanf("%d", &L); //lemos a variável que representará a largura do piso
    scanf("%d", &C); //lemos a variável que representará o comprimento do piso

    /* A lógica que usamos primeiramente foi tentar achar um padrão na disposição das lajotas do tipo 1 na imagem
    que o problema nos forneceu. Depois a segunda lógica foi tentar achar um padrão na disposição das lajotas do
    tipo 2, também através da imagem que o problema nos forneceu. */
    t1 = (L * C) + ((L - 1) * (C - 1)); /* Esta operação serve para descobrirmos o número de lajotas do tipo 1.
    Nos descobrimos este equação através do padrão que é o seguinte: a primeira fileira vertical e horizontal de 
    lajotas possui uma quantidade igual à largura e ao comprimento respectivamente, este padrão vai se alternado
    com outro que é, que o número de lajotas da sunga fila vertical e horizontal é igual a largura -1 e o comprimento -1.
    Sabendo dessas informações e das alternâncias que ocorrem conseguimos calcular a quantidade de lajotas do tipo 1
    mutiplicando a largura pelo comprimento, para saber o número de lajotas que segue o primeiro padrão(que é o padrão
    que ocorre na primeira fila) e depois tiramos 1 da largura e 1 do comprimento e depois fazemos o produto do
    resultado dessas subtrações que nos dará o número de lajotas do tipo 1 que seguem o segundo padrão (que é o pradrão
    que ocorre na segunda fila). Por fim fazemos a soma do número de lajotas que seguem o primeiro e o segundo padrão */
    t2 = ((L - 1) * 2) + ((C - 1) * 2); /* Esta operação serve para descobrirmos o números de lajotas do tipo 2.
    Nos descobrimos esta equação através do pradrão que segue as lajotas do tipo 2, que é o seguinte: as lajotas
    do tipo 2 só ficam nas bordas e a quantidade delas na vertical é um número a menos que o valor da largura
    e como ela tem dos dois lados multiplicamos por dois para saber o número de lajotas do tipo 2 que tem na vertical
    e depois disto repetimos o mesmo processo só que para horizontal. Ao final, somamos a quantidade de lajotas do tipo 2
    na vertical com a quantidade de lajotas do tipo 2 na horizontal para descobrir o número de lajotas do tipo 2. */

    //Por fim, imprimimos a quantidade de lajotas do tipo 1 e do tipo 2.
    printf("%d\n%d\n", t1, t2);

    return 0;
}