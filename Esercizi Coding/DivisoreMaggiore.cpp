/*#include <iostream>
int main()
{
	//	Scrivere un programma che dato in input un numero
	//	Chiesto all'utente, restituisca il suo più grande divisore, se stesso escluso.
	//	Il divisore più grande puo' essere il numero 1.
	

	int n, dMagg = 1, dMin=1;
	printf("Inserisci un numero: \n");
	scanf_s("%d", &n);
	if (n != 0)
	{
		for (int cont = 1; cont <= n - 1; cont++)
		{
			if (n % cont == 0)
			{
				dMagg = cont;
			}
		}
		printf("Il suo divisore maggiore escluso se stesso e' %d \n", dMagg);
	}
	else
		printf("Il più grande divisore di zero e' un numero tendente a infinito \n");
	
	//	crivere un programma che dato in input un numero
	//Chiesto all'utente, restituisca il suo divisore più piccolo.
	

		for (int cont = n; cont > 0; cont--)
		{
			if (n % cont == 0)
			{
				dMin = cont;
			}
		}
		printf("Il suo divisore minore e' %d \n", dMin);

}
*/