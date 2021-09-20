#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define FIRST_PRIME 2

int requestQuantity(void);

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int quantity, lastPrime = 0, aux = 1, count = 0;
    quantity = requestQuantity();
    int prime[quantity];
    prime[0] = FIRST_PRIME;
    printf("%d\n", prime[0]);
    while(lastPrime != quantity - 1)
    {
        if (((prime[lastPrime] + aux) % prime[count]) == 0)
        {
            count = 0;
            aux++;
        }
        else if(count < lastPrime)
            count++;
        else
        {
            prime[lastPrime + 1] = prime[lastPrime] + aux;
            lastPrime++;
            printf("%d\n", prime[lastPrime]);
            aux = 1;
            count = 0;
        }
    }
    return 0;
}

int requestQuantity(void){
    int n;
    printf("Quantos números primes você quer que sejam eauxibidos: ");
    scanf("%d", &n);
    return n;
}
