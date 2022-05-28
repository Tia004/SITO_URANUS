#include <stdio.h>
int main()
{
	int n, d, c = 0;

	printf("\nNumero: ");
	scanf("%d", &n);

	printf("\nDivisori potenze di 2: ", n);

	for (d = 0; d <= n; d++)
		if (n % d == 0)
			if ((d ^ 2) % 2 == 0)
			{
				printf("%d ", d);
				c = c + d;
			}

	printf("\nDivisori totali: %d", c);
	return 0;
}
