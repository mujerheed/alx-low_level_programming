#include "main.h"
#include <string.h>
/**
 *_strchr - a function that locates a character in a string.
 * @s: string pointer
 * @c: character to be search
 * Return: a pointer to the first occurrence of c otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (*(s + i) != c)
			*(s + i);
		else
			return (s);
		i++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
