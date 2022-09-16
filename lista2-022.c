#include <stdio.h>

int main(){
    int x, y = 0, w;
    puts("Informe um número inteiro: ");
    scanf("%d",&x);
    w = x;
    while(x != 0){
        if(x % 10 == 7){
            y += 1;
        }
        x /= 10;
    }
    printf("%d tem %d números  7.\n",w, y);
    return 0;
}
