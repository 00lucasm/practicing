#include <stdio.h>

int main(){

  int a, b, c, cmp;

  scanf("%d %d %d", &a, &b, &c);
  printf("%d\n%d\n%d\n", a, b, c);

  if((a>b) && (b>c))
    printf("%d\n%d\n%d\n", a, b, c);
  else if((a>c) && (c>b))


  return 0;
}
