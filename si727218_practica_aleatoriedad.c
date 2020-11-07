#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h> 

int bits = 12;

int delay(int number_of_seconds){
    int milli_seconds = 1000 * number_of_seconds; 
    clock_t start_time = clock(); 
    while (clock() < start_time + milli_seconds);
}

int randd(){
    int nrandom[bits];
    int ran = open("/dev/random",O_RDONLY);
    read(ran,nrandom,bits);
    delay(1);
    close(ran);
    
    printf("RANDOM: ");
    for (int i = 0; i < bits; i++)
    {
        printf("%02X",nrandom[i]);
    }
}


int urandd(){
    int urandom[bits];
    int ran2 = open("/dev/urandom",O_RDONLY);
    read(ran2,urandom,bits);
    delay(1);
    close(ran2);

    printf("\nURANDOM: ");
    for (int j = 0; j < bits; j++)
    {
        printf("%02X",urandom[j]);
    }
}

int main(){
    randd();
    urandd();
    return 0;
}