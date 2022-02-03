#include <stdio.h>

#define n 3.14159

int main(){

    double raio, area;

    scanf("%lf", &raio);

    area = n*(raio*raio);

    printf("A=%.4lf\n", area);

    return 0;
}