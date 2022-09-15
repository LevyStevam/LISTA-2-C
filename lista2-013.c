#include <stdio.h>

int main()
{
    int x,y,w = 0,i;
    puts("determine uma faixa A-B (dois números inteiros):  ");
    scanf("%d",&x);
    scanf("%d",&y);
    if(x<y){
        for(i = x;i<=y;i++){
            if(i%2==0){
                w +=i;
                
            };
            
                
                
        };
        printf("a soma dos pares dá: %d", w);
        
    }else{
        for(i=y;i<=x;i++){
            if(i%2==0){
                w+=i;
            }
        }
        printf("a soma dos pares dá: %d", w);
    }

    return 0;
}
