#include "main.h"

/**
 * print_number - function that prints an interger
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			m = n * -1;
		}
		if (m / 10)
			print_number(m / 10);

		_putchar(m % 10 + 48);
	}
	else
		_putchar('0');
}
