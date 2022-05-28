#include <stdio.h>

int main()
{
	int n, s;
	size_t i;

	n = 0;
	s = 0;
	i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("Numero: ");
		scanf("%d", &n);
		s += n;
	}

	printf("Somma = %d \n", s);

	if (s > 100)
		printf("La somma e' maggiore di 100");
	else
	{
		if (s < 100)
			printf("La somma e' minore di 100");
		else
			printf("La somma e' pari a 100");
	}

	return 0;
}
