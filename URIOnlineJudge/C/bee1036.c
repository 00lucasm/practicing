#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);

  if((a == 0) || ((b*b - 4*a*c) < -1))
    printf("Impossivel calcular\n");
  else
    printf("R1 = %.5lf\nR2 = %.5lf\n", (-b + sqrt(b*b - 4*a*c))/(2*a), (-b - sqrt(b*b - 4*a*c))/(2*a));

  return 0;
}
