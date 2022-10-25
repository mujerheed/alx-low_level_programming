#include "main.h"
#include <string.h>

/**
 * print_rev - prints strings inreverse order
 * @s: string pointer
 */
void print_rev(char *s)
{
	int len = strlen(s);
	
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
