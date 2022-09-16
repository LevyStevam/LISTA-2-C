#include <stdio.h>

int main()
{
    int x = 0, y, w, k = 1, z;
    while(!(x % 2 == 0 && x < 0)){
        puts("Para sair do programa digite um valor negativo e par.");
        puts("Informe um número: ");
        scanf("%d", &x);
        if(k == 1){
            y = x;
            w = x;
        } else {
            if(x > y){
                y = x;
            };
            if(x < w){
                w = x;
            }
        };
        k++;
    }
    z = y * w;
    printf("O menor foi: %d e o maior: %d \n", y, w);
    printf("O menor vezes o maior é: %d", z);
    return 0;
}
