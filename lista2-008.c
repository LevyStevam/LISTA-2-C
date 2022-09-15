#include <stdio.h>

int main(){
    float x, y, z;
    int w;
    printf("Informe o valor: \n");
    scanf("%f", &x);
    w = x/3;
    y = (x - w * 3) + w;
    z = (x - y)/2;
    printf("O valor inicial é: %.2f a entrada será de: %.2f mais duas parcelas de: %.2f. \n", x, y,z );
    return 0;
}
