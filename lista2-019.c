#include <stdio.h>

int main(){
    float w;
    int x, y, z = 0;
    puts("Informe o primeiro valor da faixa:");
    scanf("%d", &x);
    puts("Informe o segundo valor da faixa:");
    scanf("%d", &y);
    for(int k = x; k <= y; k+=1){
        z += k;
    };
    printf("entre %d e %d a média aritimética é: %.2f\n", x, y, (float)z/ ((y - x) + 1));
    return 0;
}
