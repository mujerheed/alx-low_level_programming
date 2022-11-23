#include "main.h"

/**
 * factorial - function that returns the factorial of n
 * @n: number given
 * Return: the factorial or -1 if < 0 and 0 if is 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
