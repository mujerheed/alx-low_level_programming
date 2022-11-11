#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: array to be processed
 * @size: size of the array
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int index1 = 0, sum_ldiag = 0, sum_rdiag = 0, ind1;

	while (index1 < size)
	{
		sum_ldiag += *(a + index1);
		a += size;
		index1++;
	}

	a -= size;

	for (ind1 = 0; ind1 < size; ind1++)
	{
		sum_rdiag += a[ind1];
		a -= size;
	}

	printf("%d, %d\n", sum_ldiag, sum_rdiag);
}
