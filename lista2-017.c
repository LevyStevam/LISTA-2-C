#include <stdio.h>

int main(){
    for(int x = 10; x <= 100; x += 10){
        printf("%d°C graus é equivalente á: %.1f°F em fahrenheit\n",x, ((x * 9.0/5.0) + 32));
    };
    return 0;
}
