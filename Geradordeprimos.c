#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n, ultipri = 1, x = 1, prcont = 0;
    printf("Quantos números primos você quer que sejam exibidos: ");
    scanf("%d", &n);
    int primo[n - 1];
    primo[0] = 2;
    primo[1] = 3;
    printf("%d\n", primo[0]);
    printf("%d\n", primo[1]);
    while(ultipri != n - 1)
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
