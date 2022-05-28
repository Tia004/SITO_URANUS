#include <stdio.h>

int main()
{
	int num1, num2, divisori, countDivisori, somma, min, max;

	countDivisori = 0;

	printf("\nNumero 1: ");
	scanf("%d", &num1);

	printf("\nNumero 2: ");
	scanf("%d", &num2);

	if (num1 < num2)
	{
		min = num1;
		max = num2;
	}
	else
	{
		min = num2;
		max = num1;
	}

	printf("\n Divisori comuni di %d e %d: ", num1, num2);

	for (divisori = 1; divisori < min; divisori++)
		if (max % divisori == 0)
			if (min % divisori == 0)
			{
				printf("%d ", divisori);
				somma += divisori;
				countDivisori++;
			}

	printf("\n\nConteggio divisori: %d", countDivisori);
	printf("\nSomma dei divisori: %d", somma);

	return 0;
}