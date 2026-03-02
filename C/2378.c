#include <stdio.h>

    /*
     FELIPE DE CARVALHO ANDRADE 20222009242
     Lucas Nepomuceno Coelho 20222009055
     Este codigo foi resolvido lendo o numero de passageiros que deceram no elevador depois os numeros de pessoas que subiram e subtraindo um com o outro.
     */
 
int main() {
  int n,c,e,s,total=0,aux=0;

  
  scanf("%d",&n);
  scanf("%d",&c);
  for (int i=0;i<n;i++){
    scanf("%d",&s);
    scanf("%d",&e);
    total = total + (e - s);
    if (total > c){
      aux = aux+1;
    }
  }
  if (aux > 0){
  printf("S\n");
    }
  else if (aux == 0){
   printf("N\n");
  }

    return 0;
}