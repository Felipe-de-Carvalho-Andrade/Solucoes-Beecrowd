#include <stdio.h>

    /*
     FELIPE DE CARVALHO ANDRADE 20222009242
     Lucas Nepomuceno Coelho 20222009055
     Este codigo foi resolvido lendo o numero de n e m respectivamente e depois
     rodando dois for para descobrir o numero primo mais perto de n e m e depois         multiplicando os dois.
     */
 
int main() {
  
    int n,m,p1,p2,aux=0;
  
  scanf("%d",&n);
  scanf("%d",&m);
  
  for (int j=2;j<n;n--){
   for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
         aux++;
      }
  }
  if (aux == 2) {
        p1 = n;
    break;
  }
    aux=0;
  }
  
  for (int i = 1; i <= m; i++) {
      if (m % i == 0) {
         aux++;
      }
  }
  if (aux == 2) {
  p2 =m;
  }
  else {
    aux =0;
  for (int w=2;w<m;m--){
   for (int i = 1; i <= m; i++) {
      if (m % i == 0) {
         aux++;
      }
  }
  if (aux == 2) {
      p2 = m;
    break;
  }
    aux=0;
  }
    }

  printf("%d\n",p1 *p2);

    
    return 0;
}