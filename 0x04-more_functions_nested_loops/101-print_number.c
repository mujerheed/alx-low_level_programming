#include "main.h"

/**
 * print_number - function that prints an interger
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int num;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		num = n;
		_putchar('-');
		_putchar((num / 10) + '0');
		_putchar((num % 10) + 48);
	}
	else
	{
		num = n;
		_putchar((num / 10) + '0');
		_putchar('0' + (num % 10));
	}
	_putchar('\n');
}
