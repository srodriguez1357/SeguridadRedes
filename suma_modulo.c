#include <stdio.h>
#include <stdlib.h>

unsigned long long curry = 0;
unsigned long long curry2 = 0;
unsigned long long resultado[4];
unsigned long long suma1[4] = {99,77,55,33};
unsigned long long suma2[4] = {88,66,44,22};
unsigned long long suma3[4] = {90,56,64,52};
int main(){

    for (int i = 0; i < 4; i++)
    {
        curry2 = suma1[i] + curry;
        if (curry2 < curry)
        {
            resultado[i] = suma2[i]%suma3[i];
        }
        else
        {
            curry2 += suma2[i];
            curry = suma2[i] > curry2 ? 1:0;
            resultado[i] = curry2%suma3[i];
        }

    }
    for (int i = 0; i < 4; i++)
    {
        printf("%llu",resultado[i]);
    }
    
    return 0;
}