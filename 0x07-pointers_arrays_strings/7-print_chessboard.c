#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: character array
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int d = 0, f;

	while (d < 8)
	{
		for (f = 0; f < 8; f++)
		{
			_putchar(a[d][f]);
		}
		_putchar('\n');
		d++;
	}
}
