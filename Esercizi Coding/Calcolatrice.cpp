
/*
#include <iostream>

int main()
{
    int valore = 0;

    while (valore == 10)
    {
        // Fai qualcos'altro ...
    }


   //   scrivere un calcolatrice che permetta all'utente di
   //   esegurire molteplici operazioni (separate tra loro),
   //   restituisce il risultato correttto e chieda all'utente
   //   se vuole continuare a fare calcoli


    char conferma;

    do
    {
        float x, y, r = 0;
        char operatore;

        printf("Inserisci il primo numero:\n ");
        scanf_s("%f", &x);
        printf("Inserisci il secondo numero:\n ");
        scanf_s("%f", &y);
        printf("Inserisci operatore:\n ");
        scanf_s(" %c", &operatore, 1);

        switch (operatore)
        {
        case '+':
            r = x + y;
            break;

        case '-':
            r = x - y;
            break;

        case '/':
            if (y != 0) {
                r = x / y;
            }
            else
            {
                printf("Non puoi fare una divisione con denominatore 0\n");
                return 2;
            }
            break;

        case '*':
            r = x * y;
            break;

        default:
            printf("Operatore non valido\n");
            return 1;
        }
        printf("%f %c %f = %f\n", x, operatore, y, r );
        printf("Desideri continuare a eseguire calcoli (Y/N):\n ");
        scanf_s(" %c", &conferma);

        while (conferma != 'Y' && conferma != 'N' && conferma != 'y' && conferma != 'n')
        {
            printf("Inserisci solo caratteri validi (Y, y, N, n)");
            scanf_s(" %c", &conferma);

        }

    } while (conferma == 'Y' || conferma == 'y');

    return 0;
}
*/