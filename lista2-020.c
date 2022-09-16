#include <stdio.h>

int main(){
    int x;
    for(int k = 1; k <= 10; k+=1){
        if(k % 2){
            x = 1;
            for(int i = k; i >= 1; i--){
                x *= i;
            };
            printf("%d!fatorial é: %d \n", k, x);
        };
    };

    
    return 0;
}
