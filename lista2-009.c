#include <stdio.h>

int main(){
    int w=1,x=1,y=0,i;
    puts("o termo 1 e o termo 2 tem valor 1");
    for(i=3; i <= 20; i++ ){
        y = w + x;
        w = x;
        x = y;
        printf("o termo %d é %d \n", i,y);
    };
}
