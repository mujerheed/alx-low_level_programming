#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: numbers to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int u = n;

	if (n < 0)
	{
		_putchar('-');
		u *= -1;
	}

	if (u / 10)
		print_number(u / 10);

	_putchar(u % 10 + '0');
}
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
