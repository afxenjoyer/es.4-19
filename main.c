#include <stdio.h>
#include <stdbool.h>

int main()
{
    int potenzialeDivisore;
    int numeroDaVerificare;
    int verificaPrimo = true;

    printf("Inserisci il numero da verificare\n");
    scanf("%d", &numeroDaVerificare);

    for (potenzialeDivisore = 2; potenzialeDivisore < numeroDaVerificare; potenzialeDivisore++)
    {
        if (numeroDaVerificare % potenzialeDivisore == 0)
        {
            verificaPrimo = false;
            break;
        }
    }

    if (numeroDaVerificare == 1)
    {
        verificaPrimo = 0;
    }

    if (verificaPrimo == true)
    {
        printf("Il numero è primo\n");
    }
    else
    {
        printf("Il numero non è primo\n");
    }

    return 0;
}