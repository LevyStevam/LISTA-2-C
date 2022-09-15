#include <stdio.h>

int main(){
    int x,i,y,w,z;
    puts("digite dois valores inteiros, sendo assim entre esses dois valores informarei o quadrado dos multiplos de 4 lá existentes.");
    scanf("%d",&z);
    scanf("%d",&w);
    if(z>w){
        for(w; w<=z; w++){
            if(w%4==0){
                printf("o quadrado de %d é %d\n",w,w*w);
            };
            
        };
        
    } else {
        for(z; z <= w; z++){
            if(z % 4 == 0){
                printf("O quadrado de %d é %d \n", z, z * z);
            };
        };
        }
    return 0;
}    
    
