#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: byte string
 * Return: a pointer to the byte in s that matches accept else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s != '\0')
	{
		for (b = 0; accept[b] != 0; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		++s;
	}
	return (NULL);
}
