#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int requestQuantity(void);

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int quantity, ultipri = 1, x = 1, prcont = 0;
    quantity = requestQuantity();
    int primo[quantity];
    primo[0] = 2;
    primo[1] = 3;
    printf("%d\n", primo[0]);
    printf("%d\n", primo[1]);
    while(ultipri != quantity - 1)
    {
        if (((primo[ultipri] + x) % primo[prcont]) == 0)
        {
            prcont = 0;
            x++;
        }
        else
        {
            if(prcont < ultipri)
            {
                prcont++;
            }
            else
            {
                primo[ultipri + 1] = primo[ultipri] + x;
                ultipri++;
                printf("%d\n", primo[ultipri]);
                x = 1;
                prcont = 0;
            }
        }
    }
    return 0;
}

int requestQuantity(void){
    int n;
    printf("Quantos números primos você quer que sejam exibidos: ");
    scanf("%d", &n);
    return n;
}
