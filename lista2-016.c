#include <stdio.h>

int main(){
    int x = 0, y = 0, k;
    for(int k = 0; k < 200; k++){
        if(k <= 100){
            if(k % 3 == 0){
                x += 1;
            };
        };
        if(200 <= k <= 100){
            if(k % 5 == 0){
                y += 1;
            };
        };
    };
    printf("%d mĂșltiplos de 3 entre 0 e 100 \n", x);
    printf("%d mĂșltiplos de 5 entre 100 e 200 \n", y);
    return 0;
}
