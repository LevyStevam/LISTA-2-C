#include <stdio.h>

int main()
{
    int v=0,b=0,p=0,r=0,n=0,t=0;
    char q;
    printf("digite seu voto, sendo Paulo = 5, Renata = 7, branco = 0, nulo qualquer outro valor, para sair digite um número negativo. \n ");
    printf("digite seu voto: \n");
    while(v >= 0){
        scanf("%d",&v);
        if(v < 0){
            break;
        }
        else{
            switch(v){
                case 0:
                    printf("Tem certeza que quer votar em branco? [S/N] \n");
                    scanf("%c", &q);
                    if(q == 'S'){
                        printf("Voto escolhido: Em branco \n ");
                        b += 1;
                    };
                    break;
                case 5:
                    printf("Tem certeza que quer votar em Paulo? [S/N] \n");
                    scanf("%c", &q);
                    if(q == 'S'){
                        printf("Voto escolhido: Paulo\n ");
                        p += 1;
                    };
                    break;
                case 7:
                    printf("Tem certeza que quer votar em Renata? [S/N] \n");
                    scanf("%c", &q);
                    if(q == 'S'){
                        printf("Voto escolhido: Renata\n ");
                        r += 1;
                    };
                    break;
                default:
                    printf("Tem certeza que quer votar nulo? [S/N] \n ");
                    scanf("%c", &q);
                    if(q == 'S'){
                        printf("Voto escolhido: Nulo \n ");
                        n += 1;
                    };
                    break;
            };
        };
        
    };
    t = b + n + p + r;
    printf("Número de votos: %d \n", t);
    printf("Eleito: ");
    p == r ? puts("Empate. ") : p > r? puts("Paulo. ") : puts("Renata. ");
    printf("Porcentagem de Paulo: %.2f%% \n", ((float)p / t) * 100);
    printf("Porcentagem de Renata: %.2f%% \n", ((float)r / t) * 100);
    printf("Porcentagem de branco: %.2f%% \n", ((float)b / t) * 100);
    printf("Porcentagem de nulos: %.2f%% \n", ((float)n / t) * 100);
            

    return 0;
}
