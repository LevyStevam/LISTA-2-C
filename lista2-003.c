#include <stdio.h>

int main()
{
    int x,y;
    puts("digite um valor que deseje saber o fatorial:");
    scanf("%d", &x);
    for(y = 1; x > 1; x = x - 1){
        y = y * x;
    }
    printf("fatorial é %d",y);
    


    return 0;
}
