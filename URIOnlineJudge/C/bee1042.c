#include <stdio.h>

int main(){

  int x, y, z, menor, medio, maior;

  scanf("%d %d %d", &x, &y, &z);

	if(x>y && x>z){
		maior = x;
		if(y>z){
			medio = y;
			menor = z;
		}else{
			medio = z;
			menor = y;
		}
	}else{
		if(y>x && y>z){
			maior = y;
			if(x>z){
				medio = x;
				menor = z;
			}else{
				medio = z;
				menor = x;	
			}
		}else{
			if(z>x && z>y){
				maior = z;
				if(x>y){
					medio = x;
					menor = y;
				}else{
					medio = y;
					menor = x;
				}
			}
		}
	}

    printf("%d\n%d\n%d\n", menor, medio, maior);
    printf("\n%d\n%d\n%d\n", x, y, z);

  return 0;
}
