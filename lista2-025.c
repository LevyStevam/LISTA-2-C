#include <stdio.h>

int main()
{
    double x = 4.0;
    int y = 3, k;
    for(k = 0; k <= 1000; k ++){
        if(k % 2){
            x += 4.0/y;
        }else {
            x -= 4.0/y;
        }
        y += 2;
        printf("pi = %f \n", x);
    }

    return 0;
}
