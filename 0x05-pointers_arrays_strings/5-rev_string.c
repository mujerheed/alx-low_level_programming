#include "main.h"
#include <string.h>

/**
  * rev_string - function tgat reverse a string
  * @s: string pointer
  */
void rev_string(char *s)
{
	int m;

	for (m = strlen(s) - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
