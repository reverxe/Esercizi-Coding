/*
    //  #pragma warning(disable:4996)
#include <iostream>

int main()
{
    //  Scrivere un programma che chieda all'utente di inserire un numero e che ritorni quel numero alla seconda.

    int x;

    printf("Inserisci un numero: ");
    scanf_s("%d", &x);

    x = x * x;

    printf("\nIl numero elevato alla seconda diventa: %d", x);

    //  Chiedere all'utente di inserire due numeri se uguali stampare un messaggio di conferma

    int x, y;

    printf("Inserisci un numero: ");
    scanf_s("%d", &x);
    printf("Inserisci un numero: ");
    scanf_s("%d", &y);

    if (x == y)
        printf("I due numeri sono uguali");
    else
        printf("Non sono uguali");
    
    // Scrivere un programma che dati 2 valori stampi a video il nome della variabile piu' grande.

    int x, y;
    printf("Inserisci un numero: ");
    scanf_s("%d", &x);
    printf("Inserisci un numero: ");
    scanf_s("%d", &y);

    if (x > y) {
        printf("%d", x);
    }
    else if(y > x) {
        printf("%d", y);  
    }
    else ("Non puoi inserire due numeri uguali")

    //  Realizza una calcolatrice che chieda in input all'utente 
    //  - 2 numeri
    //  - Un operatore
    //  L'applicazione deve stampare il risultato dell'operazione corretto

    float x, y, r=0;
    char operatore;

    printf("Inserisci il primo numero: ");
    scanf_s("%f", &x);
    printf("Inserisci il secondo numero: ");
    scanf_s("%f", &y);
    printf("Inserisci operatore:\n ");
    scanf_s(" %c", &operatore, 1);

    switch (operatore)
    {
    case '+':
        r=x + y;
        break;

    case '-':
        r=x - y;
        break;

    case '/':
        if (y != 0) { 
            r=x / y; }
        else 
        {
            printf("Non puoi fare una divisione con denominatore 0");
            return 2;
        }
        break;

    case '*':
        r=x* y;
        break;

    default:
        printf("Operatore non valido");
        return 1;
    }
    
    printf("%f %c %f = %f", x, operatore, y, r);

    //  Risultato = (float)x/y
}
*/
