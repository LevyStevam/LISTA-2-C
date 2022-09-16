#include <stdio.h>

int main(){
    int x, y, w, z, q, k;
    puts("Informe um inteiro de 5 casas");
    scanf("%d",&x);
    y = x / 10000;
    w = (x - y * 10000) / 1000;
    z = (x - (y * 10000 + y * 1000))/ 100;
    k = x % 10;
    q = ((x - k) % 100 )/10;
    if(y == k && w == q){
        printf("O inteiro %d é um palindromo.", x);
    }
    else {
        printf("O inteiro %d não é um palíndromo.", x);
    };
    return 0;
}
