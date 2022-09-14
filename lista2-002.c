#include <stdio.h>

int main(){
    char x;
    do{
        puts("digite um número 1-7: ");
        scanf("%c", &x);
        switch(x){
            case '0':
                puts("terminando.");
                break;
            case '1':
                puts("domingo");
                break;
            case '2':
                puts("segunda-feira");
                break;
            case '3':
                puts("terça-feira");
                break;
            case '4':
                puts("quarta-feira");
                break;
            case '5':
                puts("quinta-feira");
                break;
            case '6':
                puts("sexta-feira");
                break;
            case '7':
                puts("sábado");
                break;
        }
        
    }while(x != '0');   
        
    return 0;        
    
}
