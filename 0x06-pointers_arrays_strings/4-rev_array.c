#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array of int to be inverted
 * @n: size of the a
 */
void reverse_array(int *a, int n)
{
	int b, j, k, t[200];

	for (b = 0, k = n - 1; b < n && k >= 0; b++, k--)
	{
		*(t + b) = a[k];
	}
	for (j = 0; j < n; j++)
		a[j] = t[j];
	a[j] = '\0';
}
