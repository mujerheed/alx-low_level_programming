#include "main.h"

/**
 * print_most_numbers - function that prints the numbers from 0 to 9
 * but skip 2 and 4
 * Return: prints numbers
 */
void print_most_numbers(void)
{
	int r;

	for (r = 0; r < 10; r++)
	{
		if (r == 2 || r == 4)
			continue
		_putchar(48 + r);
	}
	_putchar('\n');
}
