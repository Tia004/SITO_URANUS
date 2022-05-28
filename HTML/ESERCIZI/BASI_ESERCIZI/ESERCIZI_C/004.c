#include <stdio.h>

int main()
{
	int n, d;

	printf(" Numero: ");
	scanf("%d", &n);

	printf("\n Divisori pari di %d: ", n);

	for (d = 1; d <= n; d++)
		if (n % d == 0)
			if (d % 2 == 0)
				printf("%d ", d);

	printf("\n Divisori dispari di %d: ", n);

	for (d = 1; d <= n; d++)
		if (n % d == 0)
			if (d % 2 != 0)
				printf("%d ", d);
	return 0;
}
