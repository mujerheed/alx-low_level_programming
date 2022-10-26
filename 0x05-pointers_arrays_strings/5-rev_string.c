#include "main.h"
#include <string.h>

/**
  * rev_string - function tgat reverse a string
  * @s: string pointer
  */
void rev_string(char *s)
{
	int m, p;
	char n;

	for (p = 0, m = strlen(s) - 1; m >= 0 && p < m; m--, p++)
	{
		n = *(s + p);
		*(s + p) = s[m];
		s[m] = n;

	}
}
