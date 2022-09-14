#include <stdio.h>

int main()
{
    int x;
    while(x>0){
        puts("digite um número de 1-7: ");
        scanf("%d", &x);
        switch(x){
            case 0:
            break;
            case 1:
            puts("domingo ");
            break;
            case 2:
            puts("segunda ");
            break;
            case 3:
            puts("terça-feira ");
            break;
            case 4:
            puts("quarta-feira ");
            break;
            case 5:
            puts("quinta-feira ");
            break;
            case 6:
            puts("sexta-feira ");
            break;
            case 7:
            puts("sábado ");
            break;
            default:
            puts("número invalido");
            break;
            
        }
        
        
    }

    return 0;
}
