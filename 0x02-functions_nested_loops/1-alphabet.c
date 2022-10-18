#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - function that prints the alphabet in lowercase
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

/**
 *main - Entry point check the code
 *Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
