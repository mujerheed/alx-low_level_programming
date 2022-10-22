#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of characters
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
		_putchar('\n');

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
