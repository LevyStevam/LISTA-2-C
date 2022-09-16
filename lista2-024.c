#include <stdio.h>
#include <math.h>

int main()
{
    float z;
    int x = 1, y = 1;
    while(x <= 500){
        y = 1;
        while(y <= 500){
            z = pow(y * y + x * x, 1.0/2.0);
            if(ceil(z) == z){
                printf("%d %d %.0f \n", x, y, z);
            }
        y++;
        }
        x++;
    }
    return 0;
}
