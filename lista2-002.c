#include <stdio.h>

int main()
{
    int x;
    for(x=0; x<8; x++){
        puts("digite um número de 1-7:");
        scanf("%d", &x);
        switch(x){
            case 1:
            puts("domingo");
            break;
            case 2:
            puts("segunda-feira");
            break;
            case 3:
            puts("terça-feira");
            break;
            case 4:
            puts("quarta-feira");
            break;
            case 5:
            puts("quinta-feira");
            break;
            case 6:
            puts("sexta-feira");
            break;
            case 7:
            puts("sábado");
            break;
        }
        
    }
}
