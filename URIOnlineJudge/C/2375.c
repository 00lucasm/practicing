#include <stdio.h>

#define pi 3.141592

int main(){

    int diam;
    int altura, largura, profundidade;

    scanf("%d\n%d %d %d", &diam, &altura, &largura, &profundidade);

    if((diam <= altura) && (diam <= largura) && (diam <= profundidade))
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
