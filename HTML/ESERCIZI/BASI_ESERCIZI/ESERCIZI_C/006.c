#include <stdio.h>

int main()
{
	int n, max, min, enter;
	size_t i;

	printf("\nQuanti numeri vuoi inserire: ");
	scanf("%d", &enter);

	for (i = 1; i <= enter; i++)
	{
		printf("\n Numero: ");
		scanf("%d", &n);

		if (n >= max)
			max = n;
		else
			if (n <= min)
				min = n;
	}

	printf("\nMAX: %d", max);
	printf("\nMIN: %d", min);
	return 0;
}
