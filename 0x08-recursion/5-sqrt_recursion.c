#include "main.h"

/**
 * _sqrt: function to test th square root
 * @a: number passed
 * @temp: number to test
 * Return: tested sqrt
 */
int _sqrt(int a, int temp)
{
	if ((temp * temp) == a)
		return (temp);

	if (temp == a / 2)
		return (-1);

	return (_sqrt(a, temp + 1));
}

/**
 * _sqrt_recursion - function that return the natural sqrroot of n
 * @n: number to get sqrt
 * Return: the square root of n, -1 if negative n
 */
int _sqrt_recursion(int n)
{
	int test = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, test));
}
