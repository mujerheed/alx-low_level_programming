#include "main.h"

/**
 *print_alphabet - function that prints 10x 10x 10x 10x 10x 10x 10x 10x 10x 10x the alphabet in lowercase
*/
void print_alphabet_x10(void)
{
	char letter;
	int a;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		for (a = 1; a <= 10; a++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
