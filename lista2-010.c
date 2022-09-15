#include <stdio.h>
//sabendo que o multiplo de 4 q passa de 15 é 16 que é = 4*4 e o que mais se aproxima de 90 é 4*22=88 eu fiz o algoritmo.
int main(){
    int x,i,y;
    for(i=4;i<=22;i++){
        x = i*4;
        y = x*x;
        printf("o %d multiplo de 4 tem valor %d e o seu quadrado é: %d \n",i,x,y);
    };
    return 0;  
}
