#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int g, h, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (g = 1; g <= size; g++)
		{
			for (h = 1; h <= size - g; h++)
			{
				_putchar(' ');
			}
			for (i = 1; i <= g; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
