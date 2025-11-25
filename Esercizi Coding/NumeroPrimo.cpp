/*
#include <iostream>

int main()
{
	//	Scrivere un programma che dato in input un numero chiesto in input,
	//	dica se tale numero è primo oppure no.
	
	//	Cosa definisce un numero primo?
	//	Quando è divisibile per 1 e per se stesso.

	int n, div;
	bool primo = true;
	printf("Inserisci un numero: ");
	scanf_s("%d", &n);
	div = 2;
	do
	{
		if (n % div == 0) 
		{
			primo = false;
		}
		div++;

	} while (div < n && primo == true);

	if (primo == true)
	{
		printf("Il numero e' primo");
	}
	else
		printf("Il numero non e' primo");

	//	Scrivere un programma che dato in input un numero, 
	//	restituisca n numeri primi più grandi di esso.

	int n, div, cont;
	printf("Inserisci un numero: ");
	scanf_s("%d", &n);
	printf("Inserisci la qauntita': ");
	scanf_s("%d", &cont);
	
	while (cont > 0) 
	{
		bool primo = true;
		div = 2;
		do
		{
			if (n % div == 0)
			{
				primo = false;
			}
			div++;

		} while (div < n && primo == true);

		if (primo == true)
		{
			printf("%d\n", n);
			cont--;
		}
		n++;

	}

	return 0;
} 
*/
