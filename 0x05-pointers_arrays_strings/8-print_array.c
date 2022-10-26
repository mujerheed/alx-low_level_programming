#include "main.h"

/**
 * print_array - function that prints n elements of an array of integer
 * @a: array passed
 * @n: size of the array
 */
void print_array(int *a, int n)
{
	int v = 0;

	while (v < n)
	{
		printf("%d", a[v]);
		if (v != (n - 1))
			printf(", ");
		v++;
	}
	printf("\n");
}
