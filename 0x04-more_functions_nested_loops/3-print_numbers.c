#include "main.h"

/**
 * print_numbers - function that prints the numbers from 0 to 9
 * Return: print numbers followed by nl
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar(n + 48);
		n++;
	}
	_putchar('\n');
}
int main(void)
{
    print_numbers();
    return (0);
}
