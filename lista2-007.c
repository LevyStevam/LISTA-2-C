#include <stdio.h>

int main()
{
    float x,y=0,z;
    puts("digite o dividendo: ");
    scanf("%f",&x);
    while(y==0){
        puts("digite um divisor diferente de 0: ");
        scanf("%f",&y);
    };
    z = x/y;
    printf("o valor da divisão foi = %.2f", z);

    return 0;
}
