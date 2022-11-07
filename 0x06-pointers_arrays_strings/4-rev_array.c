#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array of int to be inverted
 * @n: size of the a
 */
void reverse_array(int *a, int n)
{
	int b, k, t;

	for (b = 0, k = n - 1; b < n / 2; b++, k--)
	{
		t = *(a + b);
		*(a + b) = *(a + k);
		*(a + k) = t;
	}
}
