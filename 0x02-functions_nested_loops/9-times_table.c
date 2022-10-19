#include "main.h"
#include <stdio.h>
/**
 * times_table - function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int a, b, mul;

	a = 0;
	while (a <= 9)
	{
		for (b = 0; b < 10; b++)
		{
			mul = a * b;
			printf("%d", mul);
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar(' ');
		}
		_putchar('\n');
		a++;
	}
}
