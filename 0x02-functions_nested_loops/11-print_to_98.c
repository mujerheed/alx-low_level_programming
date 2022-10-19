#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 * @n: collect integer value
 */
void print_to_98(int n)
{
	for (; n >= 98; n--)
	{
		_putchar(n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	while (n <= 98)
	{
		_putchar(n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
}
