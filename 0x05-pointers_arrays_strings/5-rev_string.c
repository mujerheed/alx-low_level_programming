#include "main.h"
#include <string.h>

/**
  * rev_string - function tgat reverse a string
  * @s: string pointer
  */
void rev_string(char *s)
{
	int m;
	char *n = NULL;

	for (m = strlen(s) - 1; m >= 0; m--)
	{
		n[m + 1] = s[m];
		s[m] = n[m];
		s[m + 1] = n[m];
	}
	_putchar('\n');
}
