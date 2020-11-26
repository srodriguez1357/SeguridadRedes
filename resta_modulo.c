#include <stdio.h>
#include <stdlib.h>

unsigned long long curry = 0;
unsigned long long curry2 = 0;
unsigned long long resultados[4];
unsigned long long suma2[4] = {341,250,923,645};
unsigned long long suma1[4] = {560,383,185,218};
unsigned long long suma3[4] = {190,456,564,592};


int main(){
    for (int i = 0; i < 4; i++)
    {
        unsigned long long curry2 = suma2[i] + curry;
        if (curry2 < curry)
        {
            resultados[i] = suma1[i]%suma3[i];
        }
        else
        {
            curry = suma1[i] < curry2 ? 1:0;
            resultados[i] = (suma1[i]  - curry2)%suma3[i];
        }

    }
    for (int i = 0; i < 4; i++)
    {
        printf("%llu",resultados[i]);
    }
    return 0;
}