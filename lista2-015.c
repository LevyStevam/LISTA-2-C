#include <stdio.h>
#include <math.h>

int main(){
    int x;
    for(x=0;x<=7;x++){
        printf("3 elevado á : %d é igual: %.lf \n", x, pow((double)3,(double) x));
    }
    return 0;
}
