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
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {
		234234, 64534, 77632, 8723451, 98987, 1345231, 98534597,
		23456789, 6235456, 41235416, 374578, 10435434, 89734567
	};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
