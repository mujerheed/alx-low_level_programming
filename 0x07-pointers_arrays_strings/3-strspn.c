#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initial segments
 * @accept: character to be prefixed
 * Return: length of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b = 0;
	unsigned int len = 0;

	while (*(s + a) != '\0')
	{
		while (*(accept + b) != '\0')
		{
			if (*(s + a) == *(accept + b))
			{
				len += 1;
				break;
			}
			b++;
		}
		if (*(s + b) == '\0')
		{
			return (len);
		}
		a++;
	}
	return (len);
}
