/*
#include <iostream>

int main()
{
	int anno, mese, giorni;

	printf("Inserisci un mese di cui vuoi sapere la durata: ");
	scanf_s("%d", &mese);
	printf("Inserisci l'anno: ");
	scanf_s("%d", &anno);
	switch (mese)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			giorni = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			giorni = 30;
			break;
		case 2:
			if (anno % 4 == 0 || anno % 100 != 0)
			{
				printf("Questo e' un anno bisestile\n");
				giorni = 29;
			}
			else
				giorni = 28;
			break;
	}
	printf("Il numero di giorni e' %d", giorni);

}
*/
