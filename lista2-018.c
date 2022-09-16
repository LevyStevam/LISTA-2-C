#include <stdio.h>

int main(){
    long long unsigned int y = 1;
    long long unsigned int x = 0;
    for(int q = 1; q <= 64; q++){
        x += y;
        y *= 2;
    };
    printf("Depois de colocar todos os grãos o total vai ser: %llu", x);
    return 0;
}
