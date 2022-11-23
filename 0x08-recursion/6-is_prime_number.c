#include "main.h"

/**
 * _prime - function to test prime number
 * @num: number to check
 * @div: test divisibility
 * Return: 1 if n divisible otherwise 0
 */
int _prime(int num, int div)
{
	if (num % div == 0)
		return (0);
	else if (div == num / 2)
		return (1);
	
	return (_prime(num, div + 1));
}

/**
 * is_prime_number - function that n if is a prime number
 * @n: number to be checked
 * Return: 1 if n is prime otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime(n, 2));
}
