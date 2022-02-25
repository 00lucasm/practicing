#include <stdio.h>

int main(){
    float val;
    scanf("%f", &val);

    if(val <= 2000){
        printf("Isento\n");
    }else{
        if((val > 2000) && (val <= 3000)){
            printf("R$ %.2f\n", (val-2000)*0.08);
        }else{
            if((val > 3000) && (val <= 4500)){
                printf("R$ %.2f\n", (val-3000)*0.18 + 80);
            }else{
                printf("R$ %.2f\n", (val-4500)*0.28 + 80 + 270);
            }
        }
    }

    return 0;
}
