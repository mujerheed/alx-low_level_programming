#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers from 0 to 14
 * Return: print numbers 10 times
 */
void more_numbers(void)
{
	int p = 0, q = 0;

	while (p < 10)
	{
		while (q <= 14)
		{
			_putchar(q + '0');
			q++;
		}
		_putchar('\n');
		p++;
	}
	_putchar('\n');
}
