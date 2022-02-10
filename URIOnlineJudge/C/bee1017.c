#include <stdio.h>

int main()
{
  int tempo_gasto, vel_media;

  scanf("%d %d", &tempo_gasto, &vel_media);

  printf("%.3lf\n", ((tempo_gasto * vel_media)/12.0));

  return 0;
}
