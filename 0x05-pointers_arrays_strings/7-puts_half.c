#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - function that prints half of a string
 * @str: string passed
 */
void puts_half(char *str)
{
	int length, n;
	length = _strlen(str);
	if (length % 2 == 0)
	{
		for (n = 0; n < length; n++)
		{
			if (n >= (length / 2))
				_putchar(str[n]);
		}
	}
	else
	{
		for (n = 0; n < length; n++)
		{
			if (n > ((length - 1) / 2))
				_putchar(*(str + n));
		}
	}
	_putchar('\n');
}
