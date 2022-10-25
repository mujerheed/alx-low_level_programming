#include "main.h"

/**
 * _isupper - function that checks for uppwecase  character.
 * @c: collect characters as integer
 * Return: 1 if c s upper or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
