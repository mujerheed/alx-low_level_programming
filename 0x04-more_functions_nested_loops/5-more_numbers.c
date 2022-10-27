#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers from 0 to 14
 * Return: print numbers 10 times
 */
void more_numbers(void)
{
	int p = 0, q;

	while (p < 10)
	{
		q = 0;
		while (q <= 14)
		{
			if (q > 9)
			{
				_putchar(q / 10 + '0');
				_putchar(q % 10 + '0');
			}
			else
				_putchar(q + '0');
			q++;
		}
		_putchar('\n');
		p++;
	}
}
