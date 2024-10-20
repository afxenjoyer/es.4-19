#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int i;
    int numeroDaVerificare;
    int verificaPrimo = false;

    printf("Inserisci il numero da verificare\n");
    scanf("%d", &numeroDaVerificare);

    if (numeroDaVerificare > 1)
    {
        for (i = 2; i <= sqrt(numeroDaVerificare); i++)
        {
            if (numeroDaVerificare % i != 0)
                verificaPrimo = true;
            else
                verificaPrimo = false;
        }
    }
    else
    {
        verificaPrimo = false;
    }

    if (verificaPrimo == true)
        printf("%d è un numero primo\n", numeroDaVerificare);
    else
        printf("%d non è un numero primo\n", numeroDaVerificare);

    return 0;
}