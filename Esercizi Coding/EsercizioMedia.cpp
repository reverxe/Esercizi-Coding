/*#include <iostream>

int main()
{
    //  Per ogni voto, controllare che sia effettivamente una valutazione valita compresa tra 1 e 10
    //  Se l'utente inserisce tutte valutazioni valide stampare la media.

    float somma = 0, numeroVoti = 5;

    for (int i=0; i < numeroVoti; i++)
    {
        float voto;
        scanf_s("%f", &voto);
        if (voto >= 1 && voto <= 10)
            somma += voto;
        else 
        {
            printf("Numero non valido, termino il programma");
            return 1;
        }
    }

    printf("La media e' %f", somma / numeroVoti);
}*/