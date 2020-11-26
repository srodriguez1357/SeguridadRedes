#include <stdio.h>

int exp(c, d, n){
  long long int b = c;
   long long int m = d;
   long long  int resultado = 1;
    
    while (m > 0){
        if(m%2 == 0){
            b = (b*b)%n;
            m = m/2;
        }
        else{
            resultado = (b*resultado)%n;
            m = m-1;
        }
    }
}


int main()
{
    long long int res = 0;
    
    res = exp(500007, 899999, 100023);
    printf("%d", res);
}
