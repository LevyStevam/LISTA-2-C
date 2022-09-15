#include <stdio.h>

int main()
{
    int x,y,i;
    puts("digite um número para ver a sua tabuada quando multiplicado pelos números de 1 até 10: ");
    scanf("%d",&x);
    for(i=0;i<=10;i++){
        y = x*i;
        printf("%dx%d=%d \n",x,i,y);
    }
    

    return 0;
}
