#include <stdio.h>

int main(){
    int x, y, z = 0;
    puts("Informe o segundo valor: ");
    scanf("%d",&x);
    puts("Informe o primeiro valor: ");
    scanf("%d",&y);
    if(y > x){
        for(int i = x; i <= y; i++){
            if(i % 3 == 0){
                z += 1;
            };
        }
        printf("Na faixa %d-%d temos %d números divisíveis por 3\n", x, y, z);
    } else {
        for(int i = y; i <= x; i++){
            if(i % 3 == 0){
                z += 1;
            };
        };
        printf("entre os números %d e %d tem-se %d números divisíveis por 3 \n", y, x, z);
    }
    return 0;
}
