#include "main.h"

/**
 * print_number - function that prints an interger
 * @n: integer to be printed
 */
void print_number(int n)
{
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
		}

		if (n / 10)
			print_number(n / 10);

		_putchar(n % 10 + 48);
	}
	else
		_putchar('0');
}
