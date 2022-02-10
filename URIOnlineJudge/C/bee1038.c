#include <stdio.h>

int main(){

  int cod, qtd;

  scanf("%d %d", &cod, &qtd);

  if(cod == 1)
    printf("Total: R$ %.2f\n", 4.00*qtd);
  else if(cod == 2)
    printf("Total: R$ %.2f\n", 4.50*qtd);
  else if(cod == 3)
    printf("Total: R$ %.2f\n", 5.00*qtd);
  else if(cod == 4)
    printf("Total: R$ %.2f\n", 2.00*qtd);
  else if(cod == 5)
    printf("Total: R$ %.2f\n", 1.50*qtd);

  return 0;
}

