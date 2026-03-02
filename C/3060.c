#include <stdio.h>

    /*
     FELIPE DE CARVALHO ANDRADE 20222009242
     Lucas Nepomuceno Coelho 20222009055
     Este codigo foi resolvido lendo o preço da compra depois o numero de parcelas e dividindo um pelo outro, se o numero não fosse divisivel ele adiciona +1 nas parcelas até o numero ser divisivel.
     */
 
int main() {
int n,c,a=0,z=0;

  
  scanf("%d",&n);
  scanf("%d",&c);

  if (n %c ==0){
    for (int i=0;i<c;i++){
      printf("%d\n",n / c);
     }
    }

    
  else{
    for (int i=0;i<c;i++){
     if (n %c==0){
       printf("%d\n",n /c);
       }
    else{
        printf ("%d\n",(n/c) + 1);
        n = n-1;
    }
  }
  }


    return 0;
}