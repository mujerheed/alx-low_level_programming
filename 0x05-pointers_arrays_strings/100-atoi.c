#include "main.h"
#include <string.h>

/**
 * _atoi - function that convert string to an integer
 * @s: string pointer to char
 * Return: integer value
 */

int _atoi(char *s)
{
	int g = 0, res = 0, a = 0, b = -1;

	while (g < strlen(s))
	{
		if (s[g] == '-')
			b *= -1;

		if (*(s + g) >= 48 && *(s + g) <= 57)
		{
			if (res < 0)
				res = (res * 10) - (s[g] - '0');
			else
				res = (s[g] - '0') * -1;

			if (s[g + 1] < 48 || s[g + 1] > 57)
				break;
		}
		g++;
	}
	if (b < 0)
		res *= -1;

	return (res);
}
