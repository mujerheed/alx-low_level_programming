#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: numbers to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int p;

	if (n < 0)
	{
		_putchar('-');
		p *= -1;
	}

	p = n;

	if (p / 10)
		print_number(p / 10);

	_putchar(p % 10 + '0');
}
