#include <stdio.h>

int main()
{
     int nums= 0, ma, me, n;
     
    while(n != 0){
        puts("~~~~~~Para parar o programa digite 0~~~~~~");
        puts("digite um número inteiro");
        scanf("%d",&n);
        if(n != 0 ){
            
            if(nums ==0 ){
                ma = n;
                me = n;
                
            } else{
                if(n>ma){
                    ma = n;
                }
                if(n<me){
                    me = n;
                }
                
            }
            nums++;
            
        }; 
         
    };
    printf("foram digitados %d números, o maior foi: %d e o menor foi: %d", nums,ma,me);

    return 0;
}
