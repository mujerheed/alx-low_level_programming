#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array of int to be inverted
 * @n: size of the a
 */
void reverse_array(int *a, int n)
{
	int j, k, t;

	for (j = 0, k = n - 1; j < n / 2 && k >= 0; j++, k--)
	{
		t = a[j];
		a[j] = a[k];
		a[k] = t;
	}
	a[j] = '\0';
}
