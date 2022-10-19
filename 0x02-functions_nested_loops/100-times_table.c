#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: accept the number of tables.
 */
void print_times_table(int n)
{
	int a = 0, b, mul;

	if (n > 15 || n < 0)
		return;
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			mul = a * b;
			if (b == 0)
			{
				_putchar(mul + '0');
			}

			if (mul >= 10 && mul < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul / 10 + 48);
				_putchar(mul % 10 + 48);
			}
			else if (mul < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar (mul + 48);
			}
			else if (mul >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mul / 10 + 48);
				_putchar(((mul / 10) % 10) + 48);
				_putchar(mul % 10 + 48);
			}
		}
		_putchar('\n');
		a++;
	}
}
